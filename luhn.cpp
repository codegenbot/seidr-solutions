```
#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 4) {
            digit *= 2;
            sum += digit / 10 + digit % 10;
        } else {
            sum += digit;
        }
    }
    return sum;
}

int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; i++) {
        cin >> digits[i];
    }
    cout << luhn(digits) << endl;
    return 0;
}
```