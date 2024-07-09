#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    if (lst.size() < 2) return -1; // or any other value that represents None
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) return sorted[i + 1];
    }
    return -1; // or any other value that represents None
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}