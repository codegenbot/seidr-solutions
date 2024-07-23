#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n || !std::cin.eof()) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += static_cast<int>(std::floor(static_cast<float>(num) / 3.0)) - 2;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}