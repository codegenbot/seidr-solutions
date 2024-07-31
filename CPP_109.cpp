#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    vector<int> arr = {3, 2, 1}; // Example vector for testing
    assert(move_one_ball(arr));
}