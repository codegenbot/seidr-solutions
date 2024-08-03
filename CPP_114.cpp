```cpp
#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        long long sum = 0;
        for (int j = i; j < n; ++j) {
            sum += nums[j];
            if (sum < min_sum)
                min_sum = sum;
        }
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    // rest of the code
}