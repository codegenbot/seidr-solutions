#include <vector>
#include <cassert>

bool issame_vector(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame_vector({1, 2, 3}, {1, 2, 6}) == false);
    return 0;
}