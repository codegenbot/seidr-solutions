#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5}; 
    int cutIndex = 2; 
    int n = nums.size(); 

    // Your logic to find the cutoff point goes here

    for (int i = cutIndex; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}