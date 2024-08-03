#include <vector>
#include <algorithm>

void remove_duplicates(std::vector<int>& vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}