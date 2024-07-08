```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-6) { 
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
        } else if (x < -1e-6) { 
            return 0.0f; 
        }
    }
    return sum;
}

int main() {
    assert(issame(std::vector<float>(1), std::vector<float>()));
    return 0;
}