```c++
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-3,2,-3,4,5,1,-12,6,-1};
    int result = basement(nums);
    return 0;
}

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; ; i++) {
        if (i >= nums.size())
            break;
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}