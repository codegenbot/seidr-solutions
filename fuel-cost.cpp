#include <vector>
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to nearest integer
        newNum--; // subtract 2
        sum += newNum; 
    }
    return sum;
}