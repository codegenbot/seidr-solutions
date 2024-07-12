```cpp
#include <algorithm>
#include <vector>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
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
    assert(isSame(actual_output, std::vector<int>(expected_output.begin(), expected_output.end())));
}