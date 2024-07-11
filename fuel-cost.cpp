```cpp
#ifndef __cpp_init_array 201907L
#endif

#include <vector>
#include <cmath>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = static_cast<int>(std::lround((double)num / 3)) - 2; 
        sum += result;
    }
    return sum;
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    int result = calculateFuelCost(vec);
    return 0;
}