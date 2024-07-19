#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::mismatch(a.begin(), a.end(), b.begin(), b.end()) == std::make_pair(a.end(), b.end());
}