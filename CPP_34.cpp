#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cassert>

bool issame(const std::set<int>& a, const std::set<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> nums;
    int input;
    
    while (std::cin >> input) {
        nums.push_back(input);
    }

    std::set<int> num_set(nums.begin(), nums.end());

    assert(issame(num_set, std::set<int>({0, 2, 3, 5, 9, 123}));

    std::vector<int> unique_nums(nums);
    std::sort(unique_nums.begin(), unique_nums.end());
    auto it = std::unique(unique_nums.begin(), unique_nums.end());
    unique_nums.erase(it, unique_nums.end());

    assert(issame(std::set<int>(unique_nums.begin(), unique_nums.end()), std::set<int>({0, 2, 3, 5, 9, 123}));

    return 0;
}