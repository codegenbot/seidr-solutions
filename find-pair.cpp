#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    int target;
    std::cin >> n >> target;

    std::vector<int> nums(n);
    std::unordered_map<int, int> numIndex;

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::cout << complement << " " << nums[i] << std::endl;
            return 0;
        }
        numIndex[nums[i]] = i;
    }

    std::cout << "No pair found." << std::endl;
    return 0;
}