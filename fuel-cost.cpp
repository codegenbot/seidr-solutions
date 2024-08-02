#include <vector>

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(std::floor((double)num / 3)) - 2;
        sum += newNum;
    }
    return sum;
}