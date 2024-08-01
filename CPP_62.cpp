#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& a) {
    std::vector<float> result;
    for (size_t i = 1; i < a.size(); ++i) {
        result.push_back(a[i] - a[i-1]);
    }
    return result;
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
    assert(issame(derivative(std::vector<float>{1}), std::vector<float>{}));
    return 0;
}