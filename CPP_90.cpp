#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> copy = lst;
    std::sort(copy.begin(), copy.end());
    int first_smallest = copy[0];
    auto it = std::upper_bound(copy.begin(), copy.end(), first_smallest);
    if (it == copy.end()) return -1; 
    return *it;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}