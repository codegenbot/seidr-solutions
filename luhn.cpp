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

    cout << "Enter a credit card number (16 digits): ";
    while (cin >> cardNumber) {
        if (cardNumber == 0) break;
        input.push_back(cardNumber % 10);
    }

    if (input.size() != 16) {
        cerr << "Invalid credit card number." << endl;
        return 1;
    }
    
    cout << "Luhn result: " << luhn(input) << endl;

    return 0;
}