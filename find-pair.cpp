```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findPair(const std::vector<int>& nums, int target) {
    std::unordered_set<int> complement;
    int firstNum = 0;
    for (int num : nums) {
        int complementNum = target - num;
        if (complement.count(complementNum)) {
            return { firstNum, complementNum };
        }
        complement.insert(num);
        firstNum = num;
    }
    return {};
}

int main() {
    int target;
    std::cin >> target;

    int num;
    std::vector<int> nums;
    while (std::cin >> num && num != -1) {
        nums.push_back(num);
    }

    std::vector<int> pair = findPair(nums, target);
    if (pair.empty()) {
        std::cout << "No pair found\n";
    } else {
        std::cout << "Pair: " << pair[0] << " " << pair[1] << "\n";
    }

    return 0;
}
```