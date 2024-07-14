```c++
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i] * 10;
        if (doubleNext) {
            digit += digit / 10, digit %= 10;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum % 10 == 0;
}

int main() {
    vector<int> digits = {3, 4, 9, 2, 7, 8, 6, 1, 1, 7, 9, 3, 4, 5, 3, 9};
    cout << luhn(digits) << endl;
    return 0;
}