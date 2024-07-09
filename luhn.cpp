#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 1) {
            int digit = digits[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    // read input from user
    int n;
    cin >> n;
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }

    // implement Luhn's algorithm
    cout << luhn(digits) << endl;

    return 0;
}