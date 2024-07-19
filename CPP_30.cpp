#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) - std::abs(b[i]) > 1e-9) return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> input) {
    std::vector<float> output;
    for (float x : input) {
        if (x >= 0) output.push_back(x);
    }
    return output;
}