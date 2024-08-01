#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive_elements;
    for (const auto& element : input) {
        if (element > 0) {
            positive_elements.push_back(element);
        }
    }
    return positive_elements;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}