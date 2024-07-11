#include <vector>

int luhn(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        const auto& digit = numbers[i] * (i % 2 ? 1 : 2);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;
}