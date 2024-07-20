#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> vec1, vec2;
    // Read input for vec1 and vec2
    assert (issame(vec1, vec2));
    return 0;
}