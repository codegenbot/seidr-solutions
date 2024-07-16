#include <vector>
#include <iostream>

using namespace std;

int luhnAlgorithm(const vector<int>& creditCardNumber) {
    int sum = 0;
    for (int i = 0; i < creditCardNumber.size(); i++) {
        if ((i % 2 == 1)) {
            int digit = creditCardNumber[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += creditCardNumber[i];
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
    cout << luhnAlgorithm(creditCardNumber) << endl;
    return 0;
}