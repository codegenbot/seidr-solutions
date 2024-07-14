#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            digits[i] *= 2;
            if (digits[i] > 9) {
                digits[i] -= 9;
            }
        }
    }
    for (int digit : digits) {
        sum += digit;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(16);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}