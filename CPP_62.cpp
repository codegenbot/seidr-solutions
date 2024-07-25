#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& a) {
    if (a.size() <= 1) {
        return {0};
    }

    std::vector<float> result;
    for (size_t i = 1; i < a.size(); ++i) {
        result.push_back(a[i] * i);
    }

    return result;
}

int main() {
    assert(issame(std::vector<float>({1}), std::vector<float>({1})));
    assert(issame(derivative(std::vector<float>({1})), std::vector<float>{});  
    return 0;
}