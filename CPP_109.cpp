#include <algorithm>
#include <vector>
#include <iostream>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (std::abs((i + 1) - (arr[i] % arr.size())) > 1) {
            return false;
        }
    }

    return true;
}