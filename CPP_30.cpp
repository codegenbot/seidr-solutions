#include <vector>
#include <initializer_list>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(std::initializer_list<float> values) {
    std::vector<float> result;
    for (float val : values) {
        if (val > 0) result.push_back(val);
    }
    return result;
}

int main() {
    assert(issame(get_positive({1.0, -2.0, 3.0, -4.0, 5.0}), std::vector<float>{1.0, 3.0, 5.0}));
    return 0;
}