```cpp
#include <vector>
#include <cstdint>

int luhn(std::vector<int16_t> cc) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cc.size() - 1; i >= 0; --i) {
        int16_t digit = cc[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}