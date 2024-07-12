#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    long long target;
    std::cin >> n >> target;

    std::vector<long long> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::unordered_map<long long, int> map;
    for (int i = 0; i < n; ++i) {
        long long complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            std::cout << nums[i] << " " << complement << std::endl;
            return 0;
        }
        map[nums[i]] = i;
    }

    return 0;
}