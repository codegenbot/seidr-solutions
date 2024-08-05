#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> eat(int a, int b, int c) {
    return {b, c};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 1}));
    return 0;
}