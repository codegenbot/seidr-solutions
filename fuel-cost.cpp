#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = (num / 3 - 2);
        if (newNum > 0) total += newNum;
    }
    return total;
}