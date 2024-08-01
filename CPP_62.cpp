#include <vector>
#include <cassert>

template <typename T>
bool issame(const std::vector<T>& a, const std::vector<T>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(std::vector<float>{1}, std::vector<float>{}));
    return 0;
}