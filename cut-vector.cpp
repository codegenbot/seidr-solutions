#include <iostream>
#include <vector>

int main() {
    int cutIndex;
    std::cin >> cutIndex;

    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7}; // Input vector initialization for demonstration
    int n = nums.size(); // Assuming n is the size of the input vector

    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}