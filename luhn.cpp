```
#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 4) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}
```