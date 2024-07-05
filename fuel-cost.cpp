#include <vector>

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = std::floor(double(num) / 3);
        result--;
        if(result < 1) {
            result = 0;
        }
        sum += result;
    }
    return sum;
}