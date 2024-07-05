#include <vector>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += std::max(0, (num / 3) - 1);
    }
    return sum;