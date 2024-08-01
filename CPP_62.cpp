#include <vector>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<float>({1.0f}), std::vector<float>{}));
    
    return 0;
}