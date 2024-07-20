#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    bool alternate = false;
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        if (alternate) {
            int temp = cardNumber[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNumber[i];
        }
        alternate = !alternate;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(16);
    for (int i = 0; i < 16; i++) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}