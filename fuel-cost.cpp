#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int res = (num / 3);
        res = min(res, 1);
        sum += res - 2;
    }
    return sum;
}