```
#include <vector>
#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end());
    for (int i = 0; i <= arr.size(); i++) {
        if (i > 0 && arr[i] != max - i + 1) {
            return false;
        }
    }
    return true;
}