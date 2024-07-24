#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> sort_third(std::vector<int> vec) {
    std::sort(vec.begin() + 2, vec.end());
    return vec;
}