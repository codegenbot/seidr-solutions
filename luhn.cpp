#include <vector>
using namespace std;

int luhnAlgorithm(vector<int>& creditCardNumber) {
    int sum = 0;
    for (int i = creditCardNumber.size() - 1; i >= 0; --i) {
        if ((creditCardNumber[i] * 2) > 9) {
            sum += (creditCardNumber[i] * 2) - 9;
        } else {
            sum += creditCardNumber[i] * 2;
        }
        sum += creditCardNumber[i-1];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ccNum(n);
    for (int i = 0; i < n; ++i) {
        cin >> ccNum[i];
    }
    cout << luhnAlgorithm(ccNum) << endl;
    return 0;
}