// Here is the completed code:

#include <iostream>
#include <vector>
#include <limits>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = std::numeric_limits<long long>::max(), current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum)
            min_sum = current_sum;
        if (current_sum > 0) {
            long long temp_sum = 0;
            for (int j = i; j < nums.size(); j++) {
                temp_sum += nums[j];
                if (temp_sum < min_sum)
                    min_sum = temp_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    std::vector<long long> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        long long num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }
    long long min_sum = minSubArraySum(nums);
    std::cout << "Minimum subarray sum: " << min_sum << std::endl;
    return 0;
}