#include <vector>

int luhn(const std::vector<int>& numbers) {
    return (numbers.size() % 2 == 0 ? ((numbers[15] * 2) >= 10 ? numbers[15] - 9 : numbers[15] * 2) + luhnHelper(numbers, 14) : ((numbers[14] * 2) >= 10 ? numbers[14] - 9 : numbers[14] * 2) + luhnHelper(numbers, 13));
}

int luhnHelper(const std::vector<int>& numbers, int pos) {
    return (pos >= 0 ? ((numbers[pos] * 2) >= 10 ? numbers[pos] - 9 : numbers[pos] * 2) + luhnHelper(numbers, pos - 1) : 0);
}