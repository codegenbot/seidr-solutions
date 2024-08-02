#include <vector>
int calculateFuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        sum += newNum;
    }
    return sum;