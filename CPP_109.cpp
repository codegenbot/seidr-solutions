#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int minIdx = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    
    return (arr[(minIdx + n - 1) % n] <= arr[(minIdx + 1) % n]);
}