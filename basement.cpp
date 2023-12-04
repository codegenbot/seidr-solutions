#include <vector>
#include <iostream>
using namespace std;

int firstNegativeIndex(const vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {2, -1, 100};
    int result = firstNegativeIndex(nums);
    cout << "First negative index: " << result << endl;
    return 0;
}