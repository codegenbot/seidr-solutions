#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> arr_copy = arr;
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr_copy.begin(), arr_copy.end())) {
            return true;
        }
        std::rotate(arr_copy.rbegin(), arr_copy.rbegin() + 1, arr_copy.rend());
    }
    return false;
}

int main() {
    // Test cases
    assert(move_one_ball(std::vector<int>{1, 2, 3, 4, 5}) == true);
    assert(move_one_ball(std::vector<int>{2, 3, 1, 5, 4}) == true);
    assert(move_one_ball(std::vector<int>{1, 5, 3, 2, 4}) == false);

    return 0;
}