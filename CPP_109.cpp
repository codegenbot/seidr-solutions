#include <algorithm>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[min_idx]) {
            min_idx = i;
        }
    }
    
    int max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[max_idx]) {
            max_idx = i;
        }
    }
    
    return min_idx == max_idx;
}