#include <vector>

int luhn(const std::vector<int>& numbers) {
    return luhnHelper(numbers, numbers.size() - 1);
}

int luhnHelper(const std::vector<int>& numbers, int pos) {
    if (pos < 0)
        return 0;
    int digit = numbers[pos];
    if ((pos + 1) % 2 != 0) {
        if ((digit * 2) >= 10)
            return digit * 2 - 9 + luhnHelper(numbers, pos - 1);
        else
            return digit * 2 + luhnHelper(numbers, pos - 1);
    } else {
        return digit + luhnHelper(numbers, pos - 1);
    }
}