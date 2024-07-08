```cpp
#include <vector>
#include <string>

std::string luhn(std::vector<std::string> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        std::string digit = digits[i];
        if (doubleNext) {
            int temp = std::stoi(digit);
            temp *= 2;
            if (temp > 9) temp -= 9;
            sum += temp;
        }
        else {
            sum += std::stoi(digit);
        }
        doubleNext = !doubleNext;
    }
    return std::to_string(sum);
}