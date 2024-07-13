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

    while (true) {
        cout << "Enter a credit card number (or 0 to finish): ";
        cin >> cardNumber;

        if (cardNumber == 0)
            break;

        while (cardNumber != 0) {
            input.push_back(cardNumber % 10);
            cardNumber /= 10;
        }

        int result = luhn(input);
        cout << "Luhn check: " << (result % 10 ? "Invalid" : "Valid") << endl;
        input.clear();
    }

    return 0;
}