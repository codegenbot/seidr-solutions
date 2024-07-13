#include <vector>
using namespace std;

int luhnCheck(const vector<int>& cardNumber) {
    int sum = 0;
    bool isSecondDigit = true;

    for (int i = 15; i >= 0; i--) {
        if (isSecondDigit) {
            int digit = cardNumber[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += cardNumber[i];
        }
        isSecondDigit = !isSecondDigit;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for (int i = 0; i < n; i++) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;

    return 0;
}