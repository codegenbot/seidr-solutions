#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int target;
    std::cin >> target;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                std::cout << nums[i] << " " << nums[j] << std::endl;
                return 0;
            }
        }
    }
    
    std::cout << "No pair found." << std::endl;
    
    return 0;
}