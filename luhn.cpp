```cpp
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = (digits[i] * 2) % 10 + ((digits[i] * 2) / 10);
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4, 7, 8, 3, 1, 6, 2, 0, 9, 5, 5, 4, 9, 6, 3, 4};
    int result = luhn(digits);
    return 0;
}