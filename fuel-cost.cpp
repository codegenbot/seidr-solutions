#include <vector>

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(num / 3);
        if(newNum >= 1) newNum--;
        else newNum = 0;
        sum += newNum;
    }
    return sum;
}