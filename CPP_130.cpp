#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> vec1 = {1, 3};
    std::vector<int> vec2 = {1, 3};
    assert(issame(vec1, vec2));
    return 0;
}