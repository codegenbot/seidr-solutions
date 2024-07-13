#include <vector>
using namespace std;

int luhnAlgo(vector<int> cardNumber) {
    int sum = 0;
    bool doubleAlternate = false;
    
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        if (doubleAlternate) {
            int digit = cardNumber[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += cardNumber[i];
        }
        doubleAlternate = !doubleAlternate;
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
    cout << luhnAlgo(cardNumber) << endl;
    
    return 0;
}