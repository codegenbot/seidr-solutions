```cpp
#include <cassert>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1;
    for (int i = 0; i < sorted.size(); i++) {
        if (i > 0 && sorted[i] != sorted[i-1]) {
            return sorted[i];
        }
    }
    return -1;
}

int main() {
    int result = next_smallest({-35, 34, 12, -45});
    assert(result == -35);
    return 0;
}