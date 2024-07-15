#include <vector>
#include <cmath>

int calculateFuelCost(vector<int> &numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor((double)result); // Convert to double before applying floor
        result -= 2;
        total += result;
    }
    return total;
}