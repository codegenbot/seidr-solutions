#include <vector>
using namespace std;

int luhnCheck(vector<int> cardNumber) {
    int sum = 0;
    bool odd = true;
    
    for(int i = cardNumber.size() - 1; i >= 0; i--) {
        if(odd) {
            int digit = cardNumber[i] * 2;
            if(digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += cardNumber[i];
        }
        odd = !odd;
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> cardNumber(n);
    for(int i = 0; i < n; i++) {
        cin >> cardNumber[i];
    }
    cout << luhnCheck(cardNumber) << endl;
    return 0;
}