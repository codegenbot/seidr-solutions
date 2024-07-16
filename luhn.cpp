#include <vector>

int luhn(std::vector<int>& numbers) {
    int sum = 0;
    for (int i = numbers.size() - 1; i >= 0; --i) {
        if ((numbers[i] * 2) > 9) {
            sum += (numbers[i] * 2) - 9;
        } else {
            sum += numbers[i] * 2;
        }
        sum += numbers[i-1];
    }
    return sum;
}