```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> digits;
    int cardNumber;
    cout << "Enter a credit card number (16 digits): ";
    for (int i = 0; i < 16; i++) {
        cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    int sum = luhn(digits);
    if (sum % 10 == 0) {
        cout << "The credit card number is valid." << endl;
    } else {
        cout << "The credit card number is invalid." << endl;
    }
    return 0;
}

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
}