#include <vector>
using namespace std;

int luhnCheck(vector<int> creditCardNumber) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = creditCardNumber.size() - 1; i >= 0; i--) {
        if (doubleNext) {
            int doubledValue = creditCardNumber[i] * 2;
            if (doubledValue > 9) {
                sum += (doubledValue % 10) + 1;
            } else {
                sum += doubledValue;
            }
            doubleNext = false;
        } else {
            sum += creditCardNumber[i];
            doubleNext = !doubleNext;
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> creditCardNumber(n);
    for (int i = 0; i < n; i++) {
        cin >> creditCardNumber[i];
    }
    cout << luhnCheck(creditCardNumber) << endl;
    return 0;
}