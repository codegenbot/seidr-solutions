#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    if (!(std::cin >> n) || n < 2) {
        std::cerr << "Invalid input for number of elements" << std::endl;
        return 1;
    }

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> nums[i])) {
            std::cerr << "Invalid input for element at index " << i << std::endl;
            return 1;
        }
    }

    int target;
    if (!(std::cin >> target)) {
        std::cerr << "Invalid input for target value" << std::endl;
        return 1;
    }

    std::map<int, int> mp;
    std::pair<int, int> result_pair;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            result_pair = std::make_pair(mp[complement], i);
            break;
        }
        mp[nums[i]] = i;
    }

    if (result_pair.first == 0 && result_pair.second == 0) {
        std::cout << "No pair found" << std::endl;
    } else {
        std::cout << nums[result_pair.first] << ' ' << nums[result_pair.second] << std::endl;
    }

    return 0;
}