```cpp
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
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
    vector<int> digits = {4, 7, 8, 5, 3, 9, 2, 6, 1, 0, 7, 8, 4, 9, 1, 7};
    int result = luhn(digits);
    return 0;
}