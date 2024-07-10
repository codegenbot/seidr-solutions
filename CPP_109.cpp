#include <algorithm>
#include <vector>
#include <iostream>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    std::sort(arr.begin(), arr.end());

    int prev = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != prev) {
            return false;
        }
        prev = arr[i];
    }

    return true;
}