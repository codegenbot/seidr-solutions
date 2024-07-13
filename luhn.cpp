#include <vector>
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
    vector<int> digits = {4, 7, 8, 3, 1, 6, 8, 0, 1, 2, 5, 9, 9, 8, 5, 6};
    int result = luhn(digits);
    return 0;
}