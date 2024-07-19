```cpp
#include <vector>
#include <algorithm>
#include <cassert>

int nextSmallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int main_function() {
    assert(nextSmallest({-35, 34, 12, -45}) == -35);
    return 0;
}