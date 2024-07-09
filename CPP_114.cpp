#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<long long> nums) {
    long long min_sum = INT_MAX;
    for (int start = 0; start < nums.size(); start++) {
        long long sum = 0;
        for (int end = start; end < nums.size(); end++) {
            sum += nums[end];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;

    std::vector<long long> numbers(n);
    for(int i=0; i<n; ++i) {
        std::cout << "Number " << (i+1) << ": ";
        std::cin >> numbers[i];
    }

    long long result = minSubArraySum(numbers);

    std::cout << "The smallest sum is: " << result << std::endl;
    
    return 0;
}