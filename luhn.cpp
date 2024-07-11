#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNum) {
    int sum = 0;
    bool alternate = false;
    for (int i = cardNum.size() - 1; i >= 0; --i) {
        int digit = cardNum[i] * (alternate ? 2 : 1);
        if (digit > 9) digit -= 9;
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNum(n);
    for(int i = 0; i < n; ++i) {
        cin >> cardNum[i];
    }
    cout << luhnCheck(cardNum) << endl;
    return 0;
}