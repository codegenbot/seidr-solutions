#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr);

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            minIndex = i;
            break;
        }
    }
    
    if (minIndex == -1) {
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(minIndex + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Test cases
    assert(move_one_ball({2, 1, 3, 4}) == true);
    assert(move_one_ball({3, 1, 2, 4}) == true);
    assert(move_one_ball({2, 3, 1, 4}) == false);
    
    return 0;
}