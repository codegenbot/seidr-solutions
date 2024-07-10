#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * (doubleDigit ? 2 : 1);
        if (digit > 9) digit -= 9;
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    return sum;
}

int main() {
    vector<int> digits;
    // Add test cases or read input from user here
    return 0;
}