#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;

    int64_t target; // Change data type to int64_t
    std::cin >> target;

    std::vector<int64_t> nums(n); // Change data type to int64_t

    std::map<int64_t, int> numIndex;

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (numIndex.find(target - nums[i]) != numIndex.end() && i != numIndex[target - nums[i]]) {
            std::cout << target - nums[i] << " " << nums[i] << std::endl;
            return 0;
        }
        numIndex[nums[i]] = i;
    }

    std::cout << "No pair found." << std::endl;
    return 0;
}