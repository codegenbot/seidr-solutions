#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int target;
    std::cin >> target;

    std::map<int, int> hash;
    for (int i = 0; i < n; ++i) {
        int diff = target - nums[i];
        if (hash.find(diff) != hash.end()) {
            std::cout << diff << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        hash[nums[i]] = i;
    }

    return 0;
}