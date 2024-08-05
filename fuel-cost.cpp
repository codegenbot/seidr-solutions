#include <vector>
using namespace std;

int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        newNum = newNum - 2;
        if (newNum >= 1) {
            sum += newNum;
        }
    }
    return sum;
}