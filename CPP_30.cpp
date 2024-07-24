#include <vector>

bool issame(std::std::vector<float> a, std::std::vector<float> b) {
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
    return std::vector<float>(values);
}