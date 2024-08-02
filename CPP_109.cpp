#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::vector<int> arr_copy(arr);
        std::rotate(arr_copy.rbegin(), arr_copy.rbegin() + 1, arr_copy.rend());
        arr = arr_copy;
    }
    return false;
}

int main() {
    assert(move_one_ball({}) == true);
    // Additional test cases can be added here
    return 0;
}