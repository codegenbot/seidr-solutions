#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::vector<int> v = lst;
    std::sort(v.begin(), v.end());
    if (v.size() < 2) return -1; 
    return v[1];
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}