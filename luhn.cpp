#include <vector>
using namespace std;

int luhnCheck(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int doubleDigit = digits[i] * 2;
            if (doubleDigit > 9)
                sum += doubleDigit - 9;
            else
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
    vector<int> digits(16);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    cout << luhnCheck(digits) << endl;
    return 0;
}