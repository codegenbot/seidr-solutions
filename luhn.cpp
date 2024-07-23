#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    vector<int> digits;
    int cardNumber;
    
    cout << "Enter your credit card number: ";
    while (cin >> cardNumber) {
        if (cardNumber >= 0 && cardNumber <= 9) {
            digits.push_back(cardNumber);
        } else {
            break;
        }
    }
    
    int result = luhn(digits);
    cout << "The Luhn checksum is: " << result; 
    return 0;
}