#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& nums) {
    std::vector<int> unique_nums = nums;
    std::sort(unique_nums.begin(), unique_nums.end());
    unique_nums.erase(std::unique(unique_nums.begin(), unique_nums.end()), unique_nums.end());
    return unique_nums;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    
    return 0;
}