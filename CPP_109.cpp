#include <vector>

bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    return (minIndex <= n - minIndex);
}