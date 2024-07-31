#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(!issame(std::vector<int> {4, 5, 1}, std::vector<int> {5, 0}));
    return 0;
}