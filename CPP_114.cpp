#include <vector>
long long minSubArraySum(long long* nums, int size);

long long minSubArraySum(long long* nums, int size) {
    long long total = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < size; i++) {
        total += nums[i];

        if (total < min_sum)
            min_sum = total;

        if (total > 0) 
            total = 0;
    }

    return min_sum;
}

int main() {
    int N;
    std::cin >> N;
    long long* nums = new long long[N];
    for (int i = 0; i < N; i++) {
        std::cin >> nums[i];
    }
    assert(minSubArraySum(nums, N) == -1);
    delete[] nums;
    return 0;
}