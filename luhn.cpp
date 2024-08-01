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
    
    int sum = luhnCheck(digits);
    if(sum % 10 == 0) {
        cout << "The credit card number is valid." << endl;
    } else {
        cout << "The credit card number is not valid." << endl;
    }
    
    return 0;
}

int luhnCheck(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}