#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if (i % 2 == 1) {
            int doubleDigit = cardNumber[i] * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
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
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}