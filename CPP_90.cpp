#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> lst = {-35, 34, 12, -45};
    assert(next_smallest(lst) == -35);
    return 0;
}

std::vector<int> next_smallest(std::vector<int> lst) {
    std::vector<int> v = lst;
    if (v.size() < 2) return v; 
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return v[i];
        }
    }
    return v[0]; 
}