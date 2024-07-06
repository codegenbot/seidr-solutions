#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    for (int i = 1; i < n; i++) {
        while (i > 0 && arr[i] <= arr[i-1]) {
            swap(arr[i], arr[--i]);
        }
    }

    vector<int> sortedArr(arr);
    sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < n; i++) {
        if (arr[i] != sortedArr[i]) return false;
    }

    return true;
}