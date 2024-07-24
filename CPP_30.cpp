#include <vector>
#include <initializer_list>
#include <cassert>

bool ismatch(const std::vector<float>& a, const std::vector<float>& b) {
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

std::vector<float> get_positive(std::initializer_list<float> values) {
    std::vector<float> result;
    for (const auto& val : values) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(ismatch(get_positive({}), std::vector<float>{}));
    return 0;
}