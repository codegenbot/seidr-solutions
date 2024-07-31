#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> temp_a = a;
    std::sort(temp_a.begin(), temp_a.end());
    std::vector<int> temp_b = b;
    std::sort(temp_b.begin(), temp_b.end());
    return temp_a == temp_b;
}

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    assert(issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}