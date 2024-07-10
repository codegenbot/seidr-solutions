#include <vector>
using namespace std;

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int temp = num / 3;
        temp = temp - 2;
        if (temp < 0) temp = 0;
        sum += temp;
    }
    return sum;
}