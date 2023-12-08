```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findPair(std::vector<int>& nums, int target) {
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
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int target = 7;
    std::vector<int> result = findPair(nums, target);
    if (result.empty()) {
        std::cout << "Pair not found\n";
    } else {
        std::cout << "Pair: " << result[0] << " " << result[1] << "\n";
    }
    return 0;
}
```