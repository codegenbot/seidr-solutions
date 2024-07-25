#include <vector>
#include <cassert>

bool isSame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(isSame(std::vector<float>{1}, std::vector<float>{1}));
    return 0;
}