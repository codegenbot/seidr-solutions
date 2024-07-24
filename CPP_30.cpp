#include <vector>
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(std::initializer_list<float> values) {
    std::vector<float> result;
    for (auto val : values) {
        if (val > 0) {
            result.push_back(val);
        }
    }
    return result;
}