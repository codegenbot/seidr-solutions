Here is the modified code:

```cpp
#include <vector>
#include <stdexcept>

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LONG_LONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            current_sum = 0;
        }
    }

    if (min_sum == LONG_LONG_MAX)
        throw runtime_error("Array does not contain a non-negative contiguous segment sum less than or equal to 0.");
    return min_sum;
}