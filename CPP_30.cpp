#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> a) {
    std::vector<float> positive_elements;
    for (const auto& num : a) {
        if (num > 0) {
            positive_elements.push_back(num);
        }
    }
    return positive_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    is_same(get_positive({}), get_positive({0.5, -1.2, 3.0}));
    return 0;
}