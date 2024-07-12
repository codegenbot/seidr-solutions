#include <algorithm>
#include <vector>

int getAscendingOrder(const std::vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

bool isMonotonic(const std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
        else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return isMonotonic(a) && isMonotonic(b);
}

int order_by_points(const std::vector<int>& nums) {
    int points = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            points++;
        }
    }
    return points;
}

int main() {
    int nums1[] = {0,6,6,-76,-21,23,4};
    int nums2[] = {-76, -21, 0, 4, 23, 6, 6};
    assert(issame(nums1, nums2));
    std::cout << "order_by_points: " << order_by_points({0,6,6,-76,-21,23,4}) << std::endl;
    return 0;
}