#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

pair<float, float> find_closest_elements(const vector<float>& nums) {
    if (nums.size() < 2) {
        return make_pair(0.0f, 0.0f);
    }

    float diff = numeric_limits<float>::max();
    pair<float, float> result;

    for (int i = 0; i < nums.size() - 1; ++i) {
        float current_diff = abs(nums[i] - nums[i + 1]);
        if (current_diff < diff) {
            diff = current_diff;
            result.first = nums[i];
            result.second = nums[i + 1];
        }
    }

    return result;
}

int main() {
    auto issame = [](pair<float, float> a, pair<float, float> b) {
        return a.first == b.first && a.second == b.second;
    };

    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), make_pair(3.1, 4.1));

    return 0;
}