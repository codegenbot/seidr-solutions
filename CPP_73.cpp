#include <vector>

int smallest_change(vector<int> arr) {
    int min_diff = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int diff = abs(arr[i] - arr[j]);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }
    return min_diff;
}