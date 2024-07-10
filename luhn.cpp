#include <vector>
using namespace std;

int luhn(vector<int> cardNum) {
    int sum = 0;
    for (int i = 0; i < cardNum.size(); i++) {
        if ((i % 2) == 1) { // double every other digit starting with the second digit
            int temp = cardNum[i] * 2;
            if (temp > 9) { // if any of the results are over 9, subtract 9 from them
                temp -= 9;
            }
        } else {
            temp = cardNum[i];
        }
        sum += temp; // return the sum of all of the new digits.
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