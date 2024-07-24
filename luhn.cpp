#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) { // double every other digit starting with the second digit
            digits[i] *= 2;
            if (digits[i] > 9) { // if any of the results are over 9, subtract 9 from them
                digits[i] -= 9;
            }
        }
    }
    for (int i = 0; i < digits.size(); i++) {
        sum += digits[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}