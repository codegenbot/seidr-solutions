#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    int max_idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= arr[max_idx]) {
            max_idx = i;
        }
    }

    return max_idx == arr.size() - 1 || arr[0] <= arr[1];
}