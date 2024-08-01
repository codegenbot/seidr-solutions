#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive_elements;
    for (float num : input) {
        if (num > 0) {
            positive_elements.push_back(num);
        }
    }
    return positive_elements;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0; 
}