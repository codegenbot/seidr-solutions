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

bool isIdentical(const std::vector<int>& a, const std::vector<int>& b) { 
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
    std::vector<int> vec1 = {0,6,6,-76,-21,23,4};
    std::vector<int> vec2 = {-76, -21, 0, 4, 23, 6, 6};
    assert(isIdentical(vec1,vec2) == true);
    int result = getAscendingOrder({0,6,6,-76,-21,23,4});
    std::cout << "order_by_points: " << result << std::endl;
    return 0;
}