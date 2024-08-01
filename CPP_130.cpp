#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Example test case
    assert(issame(std::vector<int>{1, 3}, {1, 3}));

    return 0;
}