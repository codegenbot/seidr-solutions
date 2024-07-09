#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return checkSame(a, get_positive(a)) && checkSame(get_positive(b), b);
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> result;
    for (float f : vec) {
        if (f >= 0) {
            result.push_back(f);
        }
    }
    return result;
}