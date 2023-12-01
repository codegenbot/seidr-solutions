#include <vector>

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int minIndex = 0;
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return (minIndex <= n - 2);
}