```cpp
#include <vector>
#include <cmath>
#ifndef __cpp_init_array 201907L
#endif

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = (double)num / 3;
        int roundedResult = static_cast<int>(std::floor(result)) - 2; 
        sum += roundedResult;
    }
    return sum;
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    int result = calculateFuelCost(vec);
    return 0;
}