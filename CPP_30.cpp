#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}