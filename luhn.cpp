#include <vector>
#include <iostream>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if ((i % 2 == 0 && cardNumber[i] * 2 > 9) || (i % 2 != 0)) {
            sum += ((i % 2 == 0) ? cardNumber[i] * 2 - 9 : cardNumber[i]);
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
    for (int i = 0; i < n; ++i) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}