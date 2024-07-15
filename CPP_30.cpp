#include <vector>
#include <iostream>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_elements;
    for (float num : v) {
        if (num > 0) {
            positive_elements.push_back(num);
        }
    }
    return positive_elements;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({-1, 2, 3, -4, 5}), {2, 3, 5})); // Add your own test case
    return 0;
}