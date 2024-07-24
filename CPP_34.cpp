#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cassert>

bool issame(const std::set<int>& a, const std::set<int>& b) {
    return a == b;
}

std::vector<int> nums = {5, 3, 5, 2, 3, 3, 9, 0, 123};
std::set<int> num_set(nums.begin(), nums.end());

assert(issame(num_set, std::set<int>({0, 2, 3, 5, 9, 123}));

std::vector<int> unique_nums(nums);
std::sort(unique_nums.begin(), unique_nums.end());
auto it = std::unique(unique_nums.begin(), unique_nums.end());
unique_nums.erase(it, unique_nums.end());

assert(issame(std::set<int>(unique_nums.begin(), unique_nums.end()), std::set<int>({0, 2, 3, 5, 9, 123}));