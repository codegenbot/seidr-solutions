#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int cut_idx = 2; // Example cut index
    int n = nums.size();

    if (cut_idx == 0) {
        std::cout << nums[0] << std::endl;
        std::cout << nums[1] << std::endl;
    } else {
        for (int i = 0; i <= cut_idx; ++i) {
            std::cout << nums[i] << std::endl;
        }
        for (int i = cut_idx + 1; i < n; ++i) {
            std::cout << nums[i] << std::endl;
        }
    }
    
    return 0;
}