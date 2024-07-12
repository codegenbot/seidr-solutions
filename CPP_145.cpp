```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<std::pair<int, int>> order_by_points(const std::vector<int>& nums) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (!issame({nums[i]}, {nums[j]})) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}

int main() {
    assert(order_by_points({0,6,6,-76,-21,23,4}) == {{}, {-76, -21}, {0, 4}, {0, 6}, {0, 23}, {6, 6}});
    return 0;
}