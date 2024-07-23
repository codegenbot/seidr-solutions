#include <vector>
#include <cstddef>
#include <iostream>

using namespace std;

int basement(const vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1; 
    }
    return -1; 
}

int main() {
    vector<int> nums = {-3,2,-3,4,5,1,-12,6,1,7};
    int result = basement(nums);
    cout << "The first index where the sum becomes negative is: " << result << endl;
    return 0; 
}