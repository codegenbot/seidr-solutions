```cpp
#include <vector>
using namespace std;

long long minSubArraySum(long long* nums, int size) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
        if (sum > 0) {
            sum = 0;
        }
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}, 2) == -1);
}