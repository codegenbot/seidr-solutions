#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = static_cast<int>(std::floor(double(num) / 3));
        if(result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += result;
    }
    return sum;