```cpp
#include <vector>
using namespace std;

int findFirstNegativeIndex(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1; // or throw an exception, depending on the desired behavior
}

int main() {
    vector<int> nums = {1, -2, 3, -4};
    cout << findFirstNegativeIndex(nums);
    return 0;
}