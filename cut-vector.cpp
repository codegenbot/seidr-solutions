#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int cut_idx = 0; // Assuming cut_idx is already calculated
    
    // Print the two resulting subvectors
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