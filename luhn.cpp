```c++
#include <vector>

int luhn(const std::vector<int>& input) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = input.size() - 1; i >= 0; i--) {
        int digit = input[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum % 10;
}