#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for (float val : v) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}