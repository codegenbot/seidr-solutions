#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    return sum;

int main() {
    vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 0, 2, 8, 8, 2};
    cout << luhn(digits) << endl;
    return 0;
}