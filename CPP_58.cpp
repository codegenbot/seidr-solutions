#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.empty() && b.empty();
}

int main() {
    assert(issame({4, 3, 2, 8}, std::vector<int>{}));
    return 0;
}