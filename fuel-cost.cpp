```cpp
#include <vector>
#include <cmath>

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        double result = static_cast<double>(num) / 3;
        result = std::floor(result); 
        result -= 2; 
        sum += static_cast<int>(result);
    }
    return sum;
}