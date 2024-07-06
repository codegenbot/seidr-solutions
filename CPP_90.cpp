```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    if(lst.size() < 2) return -1; // None

    int smallest = *std::min_element(lst.begin(), lst.end());
    for(int i = 0; i < lst.size(); ++i)
        if(lst[i] > smallest) return lst[i];

    return -1; // No next smaller
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}