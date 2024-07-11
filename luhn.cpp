#include <vector>
#include <cstdint>

int luhn(std::vector<int16_t> cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); ++i) {
        int digit = cc[i] * (i % 2 ? 1 : 2);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;
}

int main() {
    std::vector<int16_t> cc = {4, 5, 2, 8, 6, 8, 1, 6, 7, 3, 9, 0, 5, 5, 7, 2};
    int result = luhn(cc);
    return 0;
}