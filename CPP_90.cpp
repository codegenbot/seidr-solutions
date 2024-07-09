```cpp
#include <cassert>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1;
    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0 && sorted[i] != sorted[i-1]) {
            return sorted[i];
        }
    }
    return -1;
}

int main() {
    if (next_smallest({-35, 34, 12, -45}) != -35) assert(false);
    return 0;
}