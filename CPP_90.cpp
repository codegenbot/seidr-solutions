```cpp
#include <algorithm>
#include <vector>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // None in C++ parlance
    return sorted[1];
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
}