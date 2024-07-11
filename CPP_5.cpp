#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(intersperse({2, 2, 2}, 2) == std::vector<int>{2, 2, 2, 2, 2});
    return 0;
}