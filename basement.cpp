#include <vector>
#include <iostream>

using namespace std;

int basement(std::vector<int> nums) {
    int runningSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];
        if (runningSum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    vector<int> nums = {5,3,-2,4};
    cout << basement(nums) << endl;
    return 0;