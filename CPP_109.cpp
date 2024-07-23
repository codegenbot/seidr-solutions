#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    vector<int> arr_copy = arr;
    sort(arr_copy.begin(), arr_copy.end());

    for (int i = 0; i < arr.size(); i++) {
        int j = 0;
        while (j + i < arr_copy.size() && arr[(i + j) % arr.size()] == arr_copy[j]) {
            j++;
        }
        if (j != i) return false;
    }

    return true;
}