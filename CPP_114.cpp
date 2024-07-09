```cpp
#include <vector>
using namespace std;

namespace std {
long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];

        if (total < min_sum)
            min_sum = total;

        if (total > 0) 
            total = 0;
    }

    return min_sum;
}
}

int main() {
    assert(minSubArraySum({1, -1}) == 0);
    return 0;
}