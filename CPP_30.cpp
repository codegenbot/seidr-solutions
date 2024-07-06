#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(std::vector<float> v) {
    v.erase(std::remove_if(v.begin(), v.end(), [](float x) { return x < 0; }), v.end());
    return v;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}