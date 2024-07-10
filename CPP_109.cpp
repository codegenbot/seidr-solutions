#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    int first = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= first) return false;
    }

    return true;
}