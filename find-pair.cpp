#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::cout << "The two elements that sum to " << target << " are: ";
    std::vector<int> result = findPair(nums, target);
    for (auto it : result) {
        std::cout << it << " ";
    }
    return 0;
}