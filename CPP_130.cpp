#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> a = {1, 3};
    assert(!issame(std::vector<int>{1}, std::vector<int>{1, 3}));
    return 0;
}