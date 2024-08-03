#include <algorithm>
#include <vector>

bool is_sorted(const std::vector<int>& v) {
    return std::is_sorted(v.begin(), v.end());
}

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (is_sorted(arr)) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}