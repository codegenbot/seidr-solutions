#include <algorithm>
#include <vector>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}