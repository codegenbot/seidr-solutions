#include <vector>

int luhn(std::vector<int> numbers) {
    int sum = 0;
    bool isSecond = true;
    for (int i = 0; i < numbers.size(); ++i) {
        int digit = numbers[i] * (isSecond ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        isSecond = !isSecond;
    }
    return sum % 10 == 0;