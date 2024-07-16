#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int min_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[(i + 1) % n]) {
            min_index = i;
            break;
        }
    }

    return (min_index == -1);
}