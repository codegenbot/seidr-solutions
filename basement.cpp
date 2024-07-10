#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> nums = {-1, 2};
    int result = basement(nums);
    cout << result << endl;
    return 0;
}

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}