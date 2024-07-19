#include <iostream>
#include <vector>

using namespace std;

bool move_one_ball(vector<int> arr) {
    if (arr.empty()) {
        return true;
    }

    int n = arr.size();
    int minIdx = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }

    return (minIdx == n - 1 || arr[0] <= arr[n - 1]);
}