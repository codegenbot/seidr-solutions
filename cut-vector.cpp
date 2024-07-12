#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_idx = -1;
    
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_idx = i;
            break;
        }
    }
    
    if (std::abs(sum - 2 * prefix_sum) < std::abs(sum - 2 * (prefix_sum - nums[cut_idx]))) {
        std::cout << "1\n";
        for (int i = 0; i <= cut_idx; ++i) {
            std::cout << nums[i] << "\n";
        }
        std::cout << "0\n";
    } else {
        std::cout << "1\n";
        for (int i = 0; i < cut_idx; ++i) {
            std::cout << nums[i] << "\n";
        }
        std::cout << nums[cut_idx] << "\n0\n";
    }
    
    return 0;
}