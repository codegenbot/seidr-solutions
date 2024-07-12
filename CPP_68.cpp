#include <vector>
#include <algorithm>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}