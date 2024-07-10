#include <vector>
using namespace std;

int luhn(vector<int> cc) {
    int sum = 0;
    for (int i = cc.size() - 1; i >= 0; --i) {
        if ((cc[i] * 2) > 9) {
            sum += (cc[i] * 2) - 9;
        } else {
            sum += cc[i] * 2;
        }
        sum += cc[i-1];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cc(n);
    for (int i = 0; i < n; ++i) {
        cin >> cc[i];
    }
    cout << luhn(cc) << endl;
    return 0;
}