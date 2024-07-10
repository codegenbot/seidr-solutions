#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        if (newNum > 1) {
            newNum--;
        }
        total += newNum - 2;
    }
    return total;
}