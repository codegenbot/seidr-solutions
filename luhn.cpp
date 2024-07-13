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

    cout << "Enter a credit card number: ";
    cin >> cardNumber; // assume you have a way to read from user

    while (cardNumber != 0) {
        input.push_back(cardNumber % 10);
        cardNumber /= 10;
    }

    int result = luhn(input);

    if(result % 10 == 0)
        cout << "The credit card number is valid." << endl;
    else
        cout << "The credit card number is not valid." << endl;

    return 0;
}