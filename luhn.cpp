#include <vector>

std::vector<long long> luhn(std::vector<int> numbers) {
    int sum = 0;
    bool doubleThisOne = false;

    for (int i = numbers.size() - 1; i >= 0; i--) {
        if (doubleThisOne) {
            int digit = numbers[i] * 2;
            if (digit > 9) {
                digit -= 9;
            }
            sum += digit;
        } else {
            sum += numbers[i];
        }
        doubleThisOne = !doubleThisOne;
    }

    return {sum};
}