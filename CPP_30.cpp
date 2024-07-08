#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9f) { // Handle floating point precision issue
            return false;
        }
    }
    return true;
}

float get_positive(const std::vector<float>& l) {
    float sum = 0.0f;
    for (const auto& x : l) {
        if (std::abs(x) > 1e-9f) { // Handle floating point precision issue
            sum += x;
        }
    }
    return sum;
}

int main() {
    assert(issame({get_positive({})}, {}));
    return 0;
}