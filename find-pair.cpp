#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;

    long long target;
    std::cin >> target;

    std::vector<int> nums(n);
    std::map<long long, int> numIndex;

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (numIndex.find(target - static_cast<long long>(nums[i])) != numIndex.end()) {
            std::cout << target - static_cast<long long>(nums[i]) << " " << nums[i] << std::endl;
            return 0;
        }
        numIndex[static_cast<long long>(nums[i])] = i;
    }

    std::cout << "No pair found." << std::endl;
    return 0;
}