```c++
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Werror"
#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = static_cast<int>(std::floor((double)result)); 
        result -= 2; 
        sum += result;
    }
    return sum;
}
#pragma GCC diagnostic pop