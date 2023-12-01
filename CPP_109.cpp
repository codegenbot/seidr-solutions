#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    return (minIndex <= n - minIndex);
}

int main() {
    std::cout << move_one_ball({}) << std::endl;
    
    return 0;
}