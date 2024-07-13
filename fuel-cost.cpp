#include <vector>
using namespace std;

int calculateFuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += ((num + 2) / 3) - 2;
    }
    return sum;
}

int main() {
    vector<int> nums = {9, 12, 15, 18};
    int totalCost = calculateFuelCost(nums);
    return 0;
}