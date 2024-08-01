#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& v) {
    // Your derivative calculation logic here
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
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
    assert(issame(derivative({1}), {}));
}