#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long total_sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        if (total_sum > min_sum) {
            min_sum = total_sum;
            break;
        }
    }

    return min_sum == LLONG_MAX ? 0 : min_sum;
}

int main() {
    vector<long long> testVector = {1, -1};
    assert(minSubArraySum(testVector) == 1);
    return 0;
}