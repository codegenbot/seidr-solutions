#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
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
    auto output = order_by_points({0,6,6,-76,-21,23,4});
    int expected_output[] = {-76, -21, 0, 4, 23, 6, 6};
    std::vector<int> actual_output(output);
    for (int i = 1; i < output.size(); i++) {
        if (actual_output[i] > actual_output[i - 1]) {
            return 0;
        }
    }
    // If the loop didn't break, then the array is sorted
    std::vector<int> expected(expected_output);
    if (!std::equal(actual_output.begin(), actual_output.end(), expected.begin())) {
        return 1;  
    } else if (!issame(output, expected_output)) {
        return 2;
    }
}