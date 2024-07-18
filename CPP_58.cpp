#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> common(std::vector<int> a, std::vector<int> b) {
    return {};
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}