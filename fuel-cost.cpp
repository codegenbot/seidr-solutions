#include <vector>

int calculateFuelCost(std::vector<int> numbers) {
    int total = 0;
    for (int number : numbers) {
        int result = (number / 3) - ((number % 3 == 0) ? 2 : 1);
        if (result < 0) {
            result = 0;
        }
        total += result;
    }
    return total;
}