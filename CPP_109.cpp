#include <algorithm>
#include <vector>

bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> arr_copy = arr;
    for (int i = 0; i < arr.size(); ++i) {
        if (std::is_sorted(arr_copy.begin(), arr_copy.end())) {
            return true;
        }
        std::rotate(arr_copy.rbegin(), arr_copy.rbegin() + 1, arr_copy.rend());
    }
    return false;
}