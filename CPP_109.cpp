#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> temp_arr = arr; // Make a copy to enable modifications
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(temp_arr.begin(), temp_arr.end())) {
            return true;
        }
        std::rotate(temp_arr.rbegin(), temp_arr.rbegin() + 1, temp_arr.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball(std::vector<int>{}) == true);
    return 0;
}