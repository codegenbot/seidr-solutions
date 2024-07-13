```
#include <vector>
using namespace std;

int main() {
    cout << luhn({4, 5, 2, 7, 1, 3, 9, 0, 8, 6, 7, 1, 1, 9, 3, 5}) << endl;
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