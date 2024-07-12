#include <iostream>
#include <vector>
#include <map>

int main() {
    long long n;
    std::cin >> n;

    long long target;
    std::cin >> target;

    std::vector<long long> nums(n);
    std::map<long long, long long> numIndex;

    for (long long i = 0; i < n; ++i) {
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