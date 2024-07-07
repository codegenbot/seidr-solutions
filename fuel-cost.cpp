#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = std::floor((double)num / 3);
        result -= 2;
        sum += result;
    }
    return sum;