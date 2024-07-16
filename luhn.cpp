#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = digits[i] * ((i % 2) == 1 ? 2 : 1);
        if (temp > 9)
            temp -= 9;
        sum += temp;
    }
    return sum;