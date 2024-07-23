#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int doubleDigit = digits[i] * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}