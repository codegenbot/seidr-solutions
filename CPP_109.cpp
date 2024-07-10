#include <vector>
#include <cassert>

bool move_one_ball(const std::vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIdx = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[(minIdx + i) % n] != arr[i]) {
            return false;
        }
    }
    
    return true;
}