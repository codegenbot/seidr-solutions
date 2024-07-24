#include <iostream>
#include <vector>
#include <set>
#include <cassert>

bool isSame(const std::set<int>& a, const std::set<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> nums = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::set<int> num_set(nums.begin(), nums.end());
    
    assert(isSame(num_set, std::set<int>({0, 2, 3, 5, 9, 123}));
    
    return 0;
}