#include <iostream>
#include <cmath>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_index = i;
            break;
        }
    }
    
    if (std::abs(prefix_sum - (sum - prefix_sum)) < std::abs(prefix_sum - nums[cut_index] - (sum - prefix_sum + nums[cut_index]))) {
        std::cout << "1" << std::endl;
        for (int i = 0; i <= cut_index; i++) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << "0" << std::endl;
    } else {
        std::cout << "1" << std::endl;
        for (int i = 0; i < cut_index; i++) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << nums[cut_index] << std::endl;
    }
    
    return 0;
}