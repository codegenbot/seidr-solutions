#include <vector>
using namespace std;

int luhnCheck(vector<int>& cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int num = cardNumber[i];
        if ((i % 2 == 1)) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> cardNumber;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        cardNumber.push_back(temp);
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}