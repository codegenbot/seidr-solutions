#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> solve(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end(), issame), l.end());
    return l;
}

int main() {
    assert(issame(std::vector<int>({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    return 0;
}