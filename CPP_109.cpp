#include <vector>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            return false;
        }
    }

    return true;
}