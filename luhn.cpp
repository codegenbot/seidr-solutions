```cpp
#include <vector>
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = (i % 2 == 0) ? digits[i] : digits[i] * 2;
        if (temp > 9)
            sum += temp - 9;
        else
            sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4, 7, 8, 5, 3, 9, 2, 6, 1, 0, 7, 8, 1, 6, 9, 3};
    int result = luhn(digits);
    return 0;
}