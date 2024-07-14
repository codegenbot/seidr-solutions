```cpp
#include <vector>
#include <initializer_list>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
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
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 1, 7, 8, 1, 6, 0, 2, 8, 8};
    int result = luhn(digits);
    return 0;
}