#include <vector>

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(round(double(num) / 3)) - 2;
        if (newNum < 1) {
            newNum = 0;
        }
        sum += newNum;
    }
    return sum;
}