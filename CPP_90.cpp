```cpp
#include <cassert>
#include <algorithm>
#include <vector>
#include <iostream>

int findNextSmallest(std::vector<int> lst);

int findNextSmallest(std::vector<int> lst) {
    if (lst.empty()) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int main() {
    int next_smallest = findNextSmallest({-35, 34, 12, -45});
    std::cout << "The next smallest number is: " << next_smallest << std::endl;
    
    assert(next_smallest == -35);
    
    return 0; 
}