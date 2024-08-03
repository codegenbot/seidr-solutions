#include <vector>
using namespace std;

int basementIndex(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    vector<int> nums = {-3,2,-3,4,5,1,-12,6,5,1};
    cout << basementIndex(nums);
    return 0;
}