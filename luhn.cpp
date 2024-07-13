```
#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() { cout << luhn({4, 5, 2, 7, 1, 3, 9, 0, 2, 6, 8, 0, 1, 1, 4, 3}); return 0; }