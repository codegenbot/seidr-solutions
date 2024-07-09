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
    vector<int> nums = {10, -2, -7, 5, -4, 8, 6};
    cout << basement(nums);
    return 0;
}