#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::vector<int> arr_copy = arr;
        std::rotate(arr_copy.rbegin(), arr_copy.rbegin() + 1, arr_copy.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball({}) == true);
    return 0;
}