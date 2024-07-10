#include <cassert>
#include <vector>

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    
    if (n == 0) {
        return true;
    }
    
    int min_val = arr[0];
    int min_idx = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }
    
    for (int i = 1; i < n; ++i) {
        if (arr[(min_idx + i) % n] < arr[(min_idx + i - 1) % n]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    
    return 0;
}