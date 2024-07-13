```cpp
#include <vector>

int firstNegative(std::vector<int>& nums) {
    int result = -1;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
            if (sum < 0) {
                result = i;
                break;
            }
        }
    }
    return result;
}