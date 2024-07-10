#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> rolling_max(const vector<int>& nums) {
    vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        result.push_back(*max_element(nums.begin() + i, nums.begin() + min(i + 3, static_cast<int>(nums.size()))));
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}