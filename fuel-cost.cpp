#include <vector>

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = floor((double)num / 3) - 2;
        sum += newNum;
    }
    return sum;
}