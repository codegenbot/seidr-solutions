```cpp
#include <algorithm>
#include <vector>

int order_by_points(const std::vector<int>& nums) {
    int points = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                points++;
            }
        }
    }
    return points;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}, { -76, -21, 0, 4, 23, 6, 6}) && order_by_points({0,6,6,-76,-21,23,4}) == order_by_points({-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}