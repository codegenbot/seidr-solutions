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

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));
    return 0;
}