#include <vector>

int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3);
        result = round(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}