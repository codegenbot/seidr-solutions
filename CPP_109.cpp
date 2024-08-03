#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end) {
    return std::is_sorted(begin, end);
}

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}