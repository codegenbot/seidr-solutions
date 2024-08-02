#include <vector>
#include <cassert>

bool issame(const std::vector<int>& vecA, const std::vector<int>& vecB) {
    return vecA == vecB;
}

std::vector<int> f(int n) {
    return std::vector<int>(n, 2);
}

int main() {
    assert(issame(std::vector<int>{1, 2, 6}, std::vector<int>{1, 2, 6}));
    assert(issame(f(3), std::vector<int>{2, 2, 2}));
    return 0;
}