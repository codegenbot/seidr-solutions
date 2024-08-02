
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> copy_arr = arr; // Make a copy of the input array
    int n = copy_arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(copy_arr.begin(), copy_arr.end())) {
            return true;
        }
        std::rotate(copy_arr.rbegin(), copy_arr.rbegin() + 1, copy_arr.rend());
    }
    return false;
}

int main() {
    assert(move_one_ball({}) == true);
    // Additional test cases can be added here
    return 0;
}