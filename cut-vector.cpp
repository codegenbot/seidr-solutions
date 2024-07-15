#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int sum = 0;
    for (int x : nums) {
        sum += x;
    }

    int target = sum / 2;
    int curr_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum >= target) {
            if (curr_sum - target <= target - (curr_sum - nums[i])) {
                for (int j = 0; j <= i; j++) {
                    std::cout << nums[j] << " ";
                }
            } else {
                for (int j = 0; j < i; j++) {
                    std::cout << nums[j] << " ";
                }
            }
            std::cout << std::endl;

            for (int j = i + 1; j < nums.size(); j++) {
                std::cout << nums[j] << " ";
            }
            std::cout << std::endl;

            break;
        }
    }

    return 0;
}