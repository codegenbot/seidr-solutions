```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 4) {
            digit = digit * 2 - 9;
        } else {
            digit *= 2;
        }
        sum += digit;
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