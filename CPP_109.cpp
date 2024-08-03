#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    for (int i = 1; i < n; i++) {
        if (arr[(min_idx + i) % n] < arr[(min_idx + i - 1) % n]) {
            return false;
        }
    }

    return true;
}