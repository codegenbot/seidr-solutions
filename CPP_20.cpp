#include <algorithm>
#include <vector>
#include <utility>
#include <initializer_list>

bool issame(vector<pair<float, float>> a, vector<pair<float, float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i].first - a[i].second) != abs(b[i].first - b[i].second)) {
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(std::initializer_list<float> numbers) {
    vector<float> nums(numbers.begin(), numbers.end());
    sort(nums.begin(), nums.end());
    pair<float, float> closest_pair = make_pair(nums[0], nums[1]);
    for (int i = 1; i < nums.size() - 1; ++i) {
        if (abs(nums[i] - nums[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = make_pair(nums[i], nums[i + 1]);
        }
    }
    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    assert(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}) == {(2.2f, 3.1f)});
    return 0;
}