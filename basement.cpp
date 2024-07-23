#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1,-2,1,3};
    int result = basementIndex(nums);
    return 0;
}

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ) {
        sum += nums[i];
        if (sum < 0)
            return i + 1;
        i++;
    }
    return -1;
}