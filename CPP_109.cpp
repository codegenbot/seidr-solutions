#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool move_one_ball(std::vector<int> arr);

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }

    int minIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return std::is_sorted(arr.begin(), arr.end()) || (minIndex == n - 1);
}

int main() {
    // Test cases
    assert(move_one_ball({}) == true);
    // Add more test cases here
}