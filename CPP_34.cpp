#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> unique(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main_task_cpp34() {
    assert(issame(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{0, 2, 3, 5, 9, 123}));
}