#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] != b[i]) && (a[i] > 0 || b[i] > 0)) {
            return false;
        }
    }
    return true;
}

float get_positive(const std::vector<float>& l) {
    float sum = 0.0f;
    for (const auto& x : l) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    assert(issame(get_positive(std::vector<float>{}), std::vector<float>()));
}