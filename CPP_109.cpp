#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (std::is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    std::vector<int> empty_vec;
    assert(move_one_ball(empty_vec) == true); 
    return 0;
}