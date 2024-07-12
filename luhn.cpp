```cpp
#include <vector>

int luhn(const std::vector<int>& numbers) {
    return numbers.size() % 2 == 0 ? (numbers[14] * 2 >= 10 ? numbers[14] - 9 : numbers[14] * 2) + luhnHelper(numbers, 13) : numbers[15] * 2 >= 10 ? numbers[15] - 9 : numbers[15] * 2 + luhnHelper(numbers, 12);
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