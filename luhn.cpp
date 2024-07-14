```c++
#include <vector>
#include <iostream>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = (i % 2 == 1) ? digits[i] * 2 : digits[i];
        if (temp > 9) {
            temp -= 9;
        }
        sum += temp;
    }
    return sum;
}

int main() {
    std::vector<int> digits({4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 1, 7, 8, 9, 6});
    int result = luhn(digits);
    std::cout << "The Luhn check sum is: " << result << std::endl;
    return 0;
}