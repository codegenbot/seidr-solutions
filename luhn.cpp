#include <vector>
using namespace std;

int luhn(vector<int> num) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = num.size() - 1; i >= 0; --i) {
        if (doubleNext) {
            int doubledNum = num[i] * 2;
            if (doubledNum > 9) {
                sum += (doubledNum % 10) + 1;
            } else {
                sum += doubledNum;
            }
            doubleNext = false;
        } else {
            sum += num[i];
            doubleNext = !doubleNext;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    cout << luhn(num) << endl;
    return 0;
}