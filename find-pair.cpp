#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    long long target;
    std::cin >> n >> target;

    std::vector<long long> nums(n);
    std::map<long long, int> numIndex;

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