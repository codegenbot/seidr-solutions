#include <algorithm>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;

    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < arr.size(); ++i) {
        int targetIndex = find(sortedArr.begin(), sortedArr.end(), arr[i]) - sortedArr.begin();
        if (targetIndex != i) return false;
    }

    return true;
}