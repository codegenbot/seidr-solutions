#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    std::vector<long long> nums;
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    for(int i=0; i<n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }
    long long result = minSubArraySum(nums);
    std::cout << "The minimum subarray sum is: " << result << std::endl;
    return 0;
}