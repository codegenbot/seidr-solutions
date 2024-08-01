#include <vector>
using namespace std;

int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int num : arr) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to nearest integer
        newNum -= 2; 
        sum += newNum;
    }
    return sum;
}