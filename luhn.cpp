#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for(int i = 0; i < digits.size(); i++) {
        if(i % 2 == 1) {
            int digit = digits[i] * 2;
            if(digit > 9)
                digit -= 9;
            sum += digit;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    // Read input from user and test the function
    int numDigits;
    cin >> numDigits;
    vector<int> cardNumber(numDigits);
    for(int i = 0; i < numDigits; i++) {
        cin >> cardNumber[i];
    }
    cout << luhn(cardNumber) << endl;
    return 0;
}