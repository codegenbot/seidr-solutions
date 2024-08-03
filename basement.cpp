#include <vector>
using namespace std;

int firstNegIndex(vector<int>& nums) {
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) {
            ans = i;
            break;
        }
    }
    return ans;
}