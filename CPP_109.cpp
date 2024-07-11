#include <vector>
#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    bool moved = false;
    for (int i = 0; i < arr.size(); i++) {
        if (!moved && arr[i] == max) continue;
        if (arr[i] != max - (i > 0 ? 1 : 0)) return false;
        moved = true;
    }
    return true;
}