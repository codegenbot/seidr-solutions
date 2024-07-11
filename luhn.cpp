#include <vector>
using namespace std;

int luhn(vector<int> cc_num) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cc_num.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubled = cc_num[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += cc_num[i];
            doubleNext = true;
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<int> cc_num(n);

    for (int i = 0; i < n; i++) {
        cin >> cc_num[i];
    }

    cout << luhn(cc_num) << endl;

    return 0;
}