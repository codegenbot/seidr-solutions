#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

std::vector<int> largest_smallest_integers(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return {nums.front(), nums.back()};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}