#include <vector>
using namespace std;

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        if (num % 3 == 0) {
            int newNum = floor((double)num / 3) - 2;
            sum += newNum;
        }
    }
    return sum;
}