#include <vector>
#include <cassert>

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
    std::vector<int> test1 = {1, 2, 3, 1, 2, 3};
    assert(move_one_ball(test1) == true);
    
    std::vector<int> test2 = {3, 1, 2, 3, 1, 2};
    assert(move_one_ball(test2) == false);
    
    return 0;
}