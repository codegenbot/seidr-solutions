#include <iostream>
#include <vector>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return true;

    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            count++;
        }
    }
    if (arr[n - 1] > arr[0]) {
        count++;
    }

    return count <= 1;
}