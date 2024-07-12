#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;

    long long target;
    std::cin >> target;

    std::vector<int> nums(n);
    std::map<int, int> numIndex;

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