#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}