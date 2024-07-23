#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ) {
        sum += nums[i];
        if (sum < 0)
            return i;
        else if (i == nums.size() - 1 || sum >= 0) 
            i++;
    }
}

int main() {
    vector<int> nums = {-1,2,3,-2,5,6,1,7,8,9,-6,-7};
    int result = basementIndex(nums);
    return 0;
}