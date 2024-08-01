#include <iostream>
#include <vector>
using namespace std;

int luhn(vector<int> cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if ((i % 2 != 0) || (cardNum[i] * 2 > 9)) {
            sum += (cardNum[i] * 2) - ((cardNum[i] * 2) > 9);
        } else {
            sum += cardNum[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNum(n);
    for (int i = 0; i < n; i++) {
        cin >> cardNum[i];
    }
    cout << luhn(cardNum) << endl;
    return 0;
}