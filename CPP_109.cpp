#include <vector>
#include <algorithm>

bool move_one_ball(std::vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}