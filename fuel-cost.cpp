#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int temp = (num / 3);
        if (temp < 1) temp = 0; // round down to nearest integer
        sum += temp - 2;
    }
    return sum;
}