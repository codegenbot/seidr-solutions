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

bool isSame(const std::vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] <= nums[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    auto output = order_by_points({0,6,6,-76,-21,23,4});
    int expected_output[] = {-76, -21, 0, 4, 23, 6, 6};
    std::vector<int> actual_output(output);
    if (!isSame(actual_output)) {
        return 1;
    }
    // If the loop didn't break, then the array is sorted
    std::vector<int> expected(expected_output);
    if (!std::equal(actual_output.begin(), actual_output.end(), expected.begin())) {
        return 2;  
    }
    return 0;
}