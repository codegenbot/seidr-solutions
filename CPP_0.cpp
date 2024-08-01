#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    vector<float> nums = numbers;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; ++i) {
        if (abs(nums[i] - nums[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements(a, 0.5) == true);
    return 0;
}