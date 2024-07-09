#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) > 1e-9f) { 
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}