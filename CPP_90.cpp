#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1; // or any other value that represents None
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or any other value that represents None

}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
}