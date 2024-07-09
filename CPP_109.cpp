#include <vector>
#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int minElement = *min_element(arr.begin(), arr.end());
    for (int i : arr) {
        if (i != minElement) return false;
    }
    return true;