#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }

    std::cout << sum << std::endl;
    
    return 0;
}