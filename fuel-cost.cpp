#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int res = num / 3 - 2;
        if (res < 0) res = 0; // round down to nearest integer
        sum += res;
    }
    return sum;
}