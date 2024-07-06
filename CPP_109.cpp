#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    int max_index = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[0]) {
            max_index = i;
            break;
        }
    }

    if (max_index == 0) return false;

    swap(arr[0], arr[max_index]);
    return true;
}