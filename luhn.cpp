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
    vector<int> input;
    int cardNumber;

    cout << "Enter a 16-digit credit card number: ";
    cin >> cardNumber; // read from user

    while (cardNumber != 0) {
        input.push_back(cardNumber % 10);
        cardNumber /= 10;
    }

    cout << "Luhn check result: " << luhn(input) << endl;

    return 0;
}