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
    
    cout << "Enter a credit card number (16 digits): ";
    for(int i = 0; i < 16; ++i) {
        cin >> cardNumber;
        digits.push_back(cardNumber);
    }
    
    cout << "Luhn checksum: " << luhn(digits) << endl;
    
    return 0;
}