#include <iostream>

int main() {
    std::vector<int> nums;
    int num;
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int index = 0;
    
    while (prefixSum < target) {
        prefixSum += nums[index];
        ++index;
    }
    
    if (prefixSum == target) {
        for (int i = 0; i < index; ++i) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << 0 << std::endl;
    } else {
        for (int i = 0; i < index; ++i) {
            std::cout << nums[i] << std::endl;
        }
        std::cout << 0 << std::endl;
    }
    
    return 0;
}