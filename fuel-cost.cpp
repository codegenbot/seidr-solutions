#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += (nums[i] / 3 - 2);
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}