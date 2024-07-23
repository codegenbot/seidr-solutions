#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    std::vector<int> leaders = findLeaders(nums);

    for (int leader : leaders) {
        std::cout << leader << " ";
    }
    
    return 0;
}