#include <vector>
#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i = 0; i <= arr.size(); i++) {
        if (i >= arr.size() || arr[i % arr.size()] != max) {
            return false;
        }
        max--;
    }
    return true;
}