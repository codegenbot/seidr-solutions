#include <vector>

int luhn(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if ((i % 2) == 1) {
            int doubled = numbers[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += numbers[i];
        }
    }
    return sum;
}