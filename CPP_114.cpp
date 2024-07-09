#include <vector>
using namespace std;

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == 0);
    vector<long long> input = {1, -1};
    cout << "Minimum subarray sum: " << minSubArraySum(input) << endl;
    return 0;
}