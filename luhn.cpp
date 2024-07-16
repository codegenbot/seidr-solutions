#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    for (int i = cardNum.size() - 1; i >= 0; i--) {
        if ((cardNum[i] * 2) > 9) {
            sum += (cardNum[i] * 2) - 9;
        } else {
            sum += cardNum[i] * 2;
        }
        sum += cardNum[i-1];
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
    cout << luhnCheck(cardNum) << endl;
    return 0;
}