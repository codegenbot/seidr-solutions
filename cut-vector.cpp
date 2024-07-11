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
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            if (std::abs(prefix_sum - half_sum) < std::abs(sum - prefix_sum - half_sum)) {
                cut_index = i;
                break;
            } else {
                cut_index = i + 1;
                break;
            }
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    
    for (int i = cut_index; i < n; i++) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << 0 << std::endl;
    
    return 0;
}