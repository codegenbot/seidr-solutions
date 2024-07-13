#include <iostream>
#include <vector>
#include <climits>

int main() {
    int num;
    std::vector<int> nums;

    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<int> leaders;
    int current_max = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= current_max) {
            current_max = nums[i];
            leaders.push_back(current_max);
        }
    }

    for (int i = leaders.size() - 1; i >= 0; --i) {
        std::cout << leaders[i] << " ";
    }

    return 0;
}