#include <vector>
#include <algorithm>

int luhn(std::vector<int> digits) {
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int temp = digits[i] * 2;
            if (temp > 9)
                temp -= 9;
            digits[i] = temp;
        }
    }
    return std::accumulate(digits.begin(), digits.end(), 0);
}