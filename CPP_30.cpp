#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positiveValues;
    for (const auto& val : input) {
        if (val > 0) {
            positiveValues.push_back(val);
        }
    }
    return positiveValues;
}

int main() {
    assert(issame(get_positive({-1.0, 2.0, -3.0, 4.0}), {2.0, 4.0}));
    return 0;
}