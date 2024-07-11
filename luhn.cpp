#include <vector>

int luhn(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        int digit = (*it) * (1 + !((it+1)%2));
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;
}