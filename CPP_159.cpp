#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> expected = {5, 0};
    assert(issame(eat(4, 5, 1), expected));
    return 0;
}