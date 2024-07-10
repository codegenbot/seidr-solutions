```
#include <vector>

int calculateFuelCost(std::vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = static_cast<int>(round((double)result)); 
        result -= 2; 
        sum += result;
    }
    return sum;
}