#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}) == true);
    assert(issame({-1, 2, 3, 4}, {-1, 2, 3, 4}) == true);
    assert(issame({1, 2, 3}, {1, 2, 3, 4}) == false);
    assert(issame({1, 2, 3, 5}, {1, 2, 3}) == false);
}