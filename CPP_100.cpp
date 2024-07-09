#include <vector>
#include <cassert>

bool vectorSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> makeApile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; i -= 2)
        pile.push_back(i);
    return pile;
}

int main() {
    assert(vectorSame(makeApile(4), {2, 4, 6, 8}));
    return 0;
}