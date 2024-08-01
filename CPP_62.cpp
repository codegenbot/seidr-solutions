#include <vector>
#include <cassert>

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

std::vector<float> derivative(const std::vector<float>& v) {
    // Add your derivative logic here
    return v;
}

int main() {
    assert(issame(derivative(std::vector<float>{1}), std::vector<float>{}));
    return 0;
}