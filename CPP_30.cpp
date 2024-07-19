#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    return std::vector<float>(vec.begin(), std::remove_if(vec.begin(), vec.end(), [](float val) { return val <= 0; }));
}