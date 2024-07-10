#include <vector>
using namespace std;

int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int newNum = (num / 3);
        newNum = floor(newNum); // round down to nearest integer
        newNum -= 2;
        sum += newNum;
    }
    return sum;
}