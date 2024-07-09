#include <vector>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}