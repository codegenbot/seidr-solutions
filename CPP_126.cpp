#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end()) && std::adjacent_find(lst.begin(), lst.end()) == lst.end();
}

int main() {
    assert(is_sorted({1, 2, 3, 4}));
}