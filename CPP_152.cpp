#include <vector>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}));
    return 0;
}