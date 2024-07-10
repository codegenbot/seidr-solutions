#include <algorithm>
#include <vector>
#include <iostream>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        int target = arr[i];
        int left = 0, right = i;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) return false;

            if (mid < i || arr[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
    }

    return true;
}