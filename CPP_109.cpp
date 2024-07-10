#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIdx = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[(minIdx + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball({}) == true); 
    // Additional test cases can be added here
    return 0;
}