#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, cur_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        cur_sum += nums[i];
        res = min(res, cur_sum);
        if (cur_sum > 0) {
            cur_sum = 0;
        }
    }
    return res;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}