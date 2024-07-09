#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    int min_element = *min_element(arr.begin(), arr.end());
    for (int i : arr) {
        if (i != min_element) return false;
    }

    return true;
}