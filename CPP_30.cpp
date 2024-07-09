#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float x : v) {
        if (x >= 0.0f) {
            result.push_back(x);
        }
    }
    return result;

int main() {
    assert(issame(get_positive({}), {}) == true);
    return 0;
}