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

int main() {
    int output = order_by_points({0,6,6,-76,-21,23,4});
    return 0;
}