#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& arr) {
    return std::is_sorted(arr.begin(), arr.end());
}

bool move_one_ball(const std::vector<int>& arr) {
    std::vector<int> temp = arr; // Make a copy of the input vector
    int n = temp.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(temp)) {
            return true;
        }
        std::rotate(temp.rbegin(), temp.rbegin() + 1, temp.rend());
    }
    return false;
}

int main() {
    // Test cases
    assert(move_one_ball({}) == true);

    return 0;
}