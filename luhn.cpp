```c++
#include <vector>
using namespace std;

int main() {
    vector<int> cardNumber = { ... }; // replace with the card number you want to check
    int sum = luhnCheck(cardNumber);
    cout << "Luhn Check: " << (sum % 10 == 0 ? "Valid" : "Invalid") << endl;
}

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    bool alternate = false;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum % 10;
}