#include <vector>
#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] != max) {
            return false;
        }
        max--;
    }
    return true;
}