#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }
    
    size_t n = arr.size();
    size_t minIndex = 0;
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    size_t shift = n - minIndex;
    for (size_t i = 0; i < n; i++) {
        size_t newIndex = (i + shift) % n;
        if (arr[newIndex] < arr[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    
    return 0;
}