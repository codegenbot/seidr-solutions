#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool factorize(int num) {
    return issame({2, 3, 3}, {2, num / 6, num / 6});
}

int main() {
    assert(issame(factorize(3 * 2 * 3), std::vector<int>({2, 3, 3})));
    return 0;
}