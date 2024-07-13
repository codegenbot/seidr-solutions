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
        cout << "Enter a 16-digit credit card number: ";
        cin >> cardNumber;

        if (cardNumber >= 1000000000000000 && cardNumber < 1999999999999999) {
            break;
        } else {
            cout << "Invalid input. Please enter a 16-digit credit card number." << endl;
        }
    }

    while (cardNumber != 0) {
        input.push_back(cardNumber % 10);
        cardNumber /= 10;
    }

    int result = luhn(input);

    if (result % 10 == 0) {
        cout << "The credit card number is valid." << endl;
    } else {
        cout << "The credit card number is not valid." << endl;
    }

    return 0;
}