#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}