#include <vector>
#include <cmath>

int calculateFuelCost(std::initializer_list<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        double result = std::floor((double(num) / 3));
        if(result >= 1) {
            result -= 1;
        } else {
            result = 0;
        }
        sum += static_cast<int>(result);
    }
    return sum;
}