#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int minIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return (minIndex == n - 1) || (arr[minIndex] > arr[0]);
}