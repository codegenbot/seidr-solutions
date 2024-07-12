```cpp
#include <initializer_list>

std::pair<bool, bool> issame(const std::vector<int>& a, const std::vector<int>& b) {
    return {a.size() == 1 && b.size() == 1 && *a.begin() == *b.begin(), true};
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (!std::equal({nums[i]}, {nums.begin() + j})) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}

auto output = order_by_points({0,6,6,-76,-21,23,4});
assert(std::equal(output.begin(), output.end(), std::vector<std::pair<int, int>>{{-76, -21}, {0, 4}, {0, 6}, {4, 6}}));