#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

auto unique(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    std::vector<int> result(std::unique(first, last), last);
    return result;
}