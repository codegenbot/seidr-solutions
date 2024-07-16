#include <iostream>
#include <vector>

int luhn(int* digits, int n) {
    int sum = 0;
    for (auto i = n - 1; i >= 0; --i) {
        if (i % 2 == 1) {
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
    std::vector<int> digits = {4, 7, 8, 2, 0, 0, 8, 6, 7, 1, 1, 4, 3, 5, 5, 9};
    int result = luhn(&digits[0], digits.size());
    std::cout << "Result: " << result << std::endl;
    return 0;
}