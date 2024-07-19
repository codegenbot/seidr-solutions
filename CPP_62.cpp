#include <vector>
#include <cassert>

bool issame(const std::pmr::vector<float>& a, const std::pmr::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(std::pmr::vector<float>{1.0f}, std::pmr::vector<float>{1.0f}));
    
    return 0;
}