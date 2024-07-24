#include <iostream>
#include <vector>

int main() {
    int cutIndex;
    std::cin >> cutIndex;

    std::vector<int> nums = {1, 3, 5, 7, 4, 2}; // Example vector
    int n = nums.size();

    for (int i = 0; i <= cutIndex; i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

    for (int i = cutIndex + 1; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    return 0;
}