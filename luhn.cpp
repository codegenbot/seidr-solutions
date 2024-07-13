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

int main() { 
    cout << luhn({4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 0, 2, 0, 8}) << endl; 
    return 0; 
}