#include <climits>
#include <vector>

namespace std {
long long minSubArraySum(std::vector<long long> nums) {
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
    std::vector<long long> numbers = {1, -2, 3, 10, -4, 7, 2, -5};
    std::cout << std::minSubArraySum(numbers) << std::endl;
    return 0;
}