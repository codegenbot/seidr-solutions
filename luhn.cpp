#include <vector>
#include <cstdint>

int luhn(std::vector<int16_t> cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); ++i) {
        int digit = cc[i] * ((i % 2) ? 1 : 2);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;
}