#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& v) {
    std::vector<int> result = v;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return remove_duplicates(a) == remove_duplicates(b);
}