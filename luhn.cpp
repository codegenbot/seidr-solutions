```
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}

int main() {
    return luhn({4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 0, 2, 0, 8});
}