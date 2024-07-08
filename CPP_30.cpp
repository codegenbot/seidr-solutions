#include <vector>
#include <cassert>

namespace std {
    bool issame(std::vector<float> a, std::vector<float> b) {
        return a == b;
    }
}

std::vector<float> get_positive(std::vector<float> input) {
    std::vector<float> result;
    for (const auto &num : input) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(std::issame(get_positive({}), {}));
}