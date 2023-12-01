#include <vector>
#include <cassert>

bool move_one_ball(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = 0;
    for (int i = 1; i < n/2; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    return (minIndex < n/2);
}

int main() {
    // Test cases
    assert(move_one_ball({1, 3, 2, 4}) == true);
    assert(move_one_ball({5, 2, 10, 6}) == false);
    
    return 0;
}