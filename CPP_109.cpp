#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    return (min_index == n - 1 || arr[0] <= arr[n - 1]);
}

int main() {
    assert(move_one_ball({}) == true);
    
    return 0;
}