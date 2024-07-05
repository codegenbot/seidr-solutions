#include <vector>
#include <cassert>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert (issame(get_positive({-1.0, 2.0, -3.0, 4.0}) , {2.0, 4.0}));
    assert (issame(get_positive({0.0, -2.0, -3.0, -4.0}) , {}));
    assert (issame(get_positive({1.0, 2.0, 3.0}) , {1.0, 2.0, 3.0}));
    return 0;
}