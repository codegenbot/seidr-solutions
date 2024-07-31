#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), std::vector<float>{}));
    assert(issame(get_positive({1.5, -3.2, 4.8, -2.0}), std::vector<float>{1.5, 4.8}));
    assert(issame(get_positive({-1.0, -2.0, -3.0}), std::vector<float>{}));

    return 0;
}