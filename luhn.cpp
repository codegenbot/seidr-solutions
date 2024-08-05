#include <vector>

int luhn(const std::vector<int>& input) {
    int sum = 0;
    bool alternate = false;

    for (int i = input.size() - 1; i >= 0; --i) {
        int digit = input[i] * (alternate ? 2 : 1);
        if (digit > 9) digit -= 9;
        sum += digit;
        alternate = !alternate;
    }

    return sum % 10 == 0;
}