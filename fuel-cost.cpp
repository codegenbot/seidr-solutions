#include <vector>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = static_cast<int>(i / 3.0);
        result -= 2; 
        sum += result;
    }
    return sum;
}