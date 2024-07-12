#include <vector>

int luhn(const std::vector<int>& numbers) {
    if (numbers.size() % 2 == 0)
        return numbers[15] * 2 >= 10 ? numbers[15] - 9 : numbers[15] * 2 + sumHelper(numbers, 14);
    else
        return numbers[14] * 2 >= 10 ? numbers[14] - 9 : numbers[14] * 2 + sumHelper(numbers, 13);
}

int sumHelper(const std::vector<int>& numbers, int pos) {
    if (pos < 0)
        return 0;
    int digit = numbers[pos];
    if ((pos + 1) % 2 != 0) {
        if ((digit * 2) >= 10)
            return digit * 2 - 9 + sumHelper(numbers, pos - 1);
        else
            return digit * 2 + sumHelper(numbers, pos - 1);
    } else {
        return digit + sumHelper(numbers, pos - 1);
    }
}