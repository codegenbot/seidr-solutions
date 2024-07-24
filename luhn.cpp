#include <vector>
using namespace std;

int luhnCheck(const vector<int>& creditCardNumber) {
    int sum = 0;
    for (int i = 0; i < creditCardNumber.size(); ++i) {
        if ((creditCardNumber[i] * 2) > 9) {
            sum += ((creditCardNumber[i] * 2) - 9);
        } else {
            sum += (creditCardNumber[i] * 2);
        }
        if (i % 2 != 0) {
            sum += creditCardNumber[i];
        }
    }
    return sum;
}

int main() {
    int n; 
    cin >> n; 
    vector<int> creditCardNumber(n);
    for(int i = 0; i < n; ++i) {
        cin >> creditCardNumber[i];
    }
    cout << luhnCheck(creditCardNumber) << endl;
    return 0;
}