```c++
#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (auto i = digits.size() - 1; i >= 0; --i) {
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
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}