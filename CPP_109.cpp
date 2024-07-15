#include <vector>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }

    int minIndex = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    for (int i = 0; i < n; i++) {
        int expectedValue = arr[(minIndex + i) % n];
        if (arr[i] != expectedValue) {
            return false;
        }
    }

    return true;
}