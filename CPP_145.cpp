#include <algorithm>
#include <vector>

int order_by_points(const std::vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

bool same(const std::vector<int>& a,const std::vector<int>& b) {
    return (a == b);
}