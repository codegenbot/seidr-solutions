#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if ((i % 2 == 1)) {
            int digit = cardNumber[i] * 2;
            if (digit > 9)
                sum += digit - 9;
            else
                sum += digit;
        } else {
            sum += cardNumber[i];
        }
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
    cout << luhn(cardNumber) << endl;
    return 0;
}