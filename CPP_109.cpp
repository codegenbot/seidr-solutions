#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    vector<int> arr_copy = arr;
    sort(arr_copy.begin(), arr_copy.end());

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != arr_copy[(i + arr_copy.size() - arr.size()) % arr_copy.size()]) {
            return false;
        }
    }

    return true;
}