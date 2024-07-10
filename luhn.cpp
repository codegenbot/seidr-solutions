#include <vector>
using namespace std;

int main() {
    int sum = 0;
    bool doubleDigit = false;
    vector<int> digits;
    cout << "Enter a credit card number (16 digits): ";
    for(int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        digits.push_back(digit);
    }
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    cout << "The Luhn check result is: " << sum << endl;
    return 0;
}