#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n, target;
    std::cin >> n;
    std::vector<int> nums(n);
    std::unordered_map<int, int> numIndex;

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (numIndex.find(target - nums[i]) != numIndex.end()) {
            std::cout << target - nums[i] << " " << nums[i] << std::endl;
            return 0;
        }
        numIndex[nums[i]] = i;
    }

    std::cout << "No pair found." << std::endl;
    return 0;
}