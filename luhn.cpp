#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool doubleThisOne = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if (!doubleThisOne) {
            sum += cardNumber[i];
        } else {
            sum += cardNumber[i] * 2;
            if (cardNumber[i] * 2 > 9) {
                sum -= 9;
            }
        }
        
        doubleThisOne = !doubleThisOne;
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
    cout << luhn(cardNumber) << endl;
    return 0;
}