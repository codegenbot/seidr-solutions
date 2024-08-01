#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> arr_copy = arr; // Make a copy of the input vector
    int n = arr_copy.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr_copy.begin(), arr_copy.end())) {
            return true;
        }
        std::rotate(arr_copy.rbegin(), arr_copy.rbegin() + 1, arr_copy.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball(std::vector<int>{}) == true);
    return 0;
}