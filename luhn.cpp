#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if(i % 2 == 1) {
            digit *= 2;
            if(digit > 9) digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for(int i = 0; i < n; ++i) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}