#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > min_sum)
            return min_sum;
        else
            min_sum = min(min_sum, sum);
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == 0);
}