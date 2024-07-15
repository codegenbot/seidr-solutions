#include <vector>
#include <cmath>

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}