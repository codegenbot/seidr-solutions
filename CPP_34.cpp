#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>

std::vector<int> unique(const std::vector<int>& nums) {
    std::vector<int> result = nums;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

int main() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    
    return 0;
}