#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr.begin(), arr.end())) {
            return true;
        }
        std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    // Test your code here if needed
    return 0;
}