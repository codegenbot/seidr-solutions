#include <vector>
#include <stdexcept>
#include <iostream>

int basement(const std::vector<int>& nums) {
    int sum = 0;
    for (std::size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1;
    }
    return -1;
}

int main() {
    try {
        std::cout << basement({-1,2,3,-2,5}) << '\n';
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return -1;
    }
}