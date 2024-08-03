#include <iostream>
#include <vector>

int main() {
    std::vector<double> nums; 
    double n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    double sum = 0; 
    for (double num : nums) { 
        sum += std::floor(num/3) - 2; 
    }

    std::cout << sum << std::endl;

    return 0;
}