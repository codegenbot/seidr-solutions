```
#include <vector>
using namespace std;

int main() {
    cout << luhn({4, 5, 2, 8, 6, 9, 6, 0, 1, 7, 2, 1, 3, 9, 8, 5}) << endl;
    return 0;
}

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