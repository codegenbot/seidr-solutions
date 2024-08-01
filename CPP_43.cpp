#include <iostream>
#include <vector>
#include <unordered_set>

bool pairs_sum_to_zero(std::vector<int> l) {
    std::unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    bool result = pairs_sum_to_zero(nums);
    std::cout << (result ? "True" : "False") << std::endl;

    return 0;
}