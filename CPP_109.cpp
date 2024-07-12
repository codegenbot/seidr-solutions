#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        std::vector<int> temp_arr = arr;
        if (std::is_sorted(temp_arr.begin(), temp_arr.end())) {
            return true;
        }
        std::rotate(temp_arr.rbegin(), temp_arr.rbegin() + 1, temp_arr.rend());
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