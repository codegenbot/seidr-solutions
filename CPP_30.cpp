#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_elements;
    for (float element : v) {
        if (element > 0) {
            positive_elements.push_back(element);
        }
    }
    return positive_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
}