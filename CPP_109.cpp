#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) {
        return true;
    }
    
    int n = arr.size();
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    int rotations = n - minIndex;
    for (int i = 0; i < n; i++) {
        int newIndex = (i + rotations) % n;
        if (arr[newIndex] < arr[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball({}) == true);
    // Add more test cases here
    return 0;
}