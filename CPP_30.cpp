#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float f : v) {
        if (f > 0) {
            result.push_back(f);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));
}