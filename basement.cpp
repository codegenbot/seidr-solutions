```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    return 0;
}

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0)
            return i;
    }
    return -1;
}