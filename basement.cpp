#include <vector>
using namespace std;

int basement(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {-3, 2, 5, -6, 7};
    cout << basement(nums);
    return 0;
}