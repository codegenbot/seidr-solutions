#include <vector>
#include <cmath>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    return true;
}

float find_closest_elements(std::vector<float> v) {
    float min_diff = std::numeric_limits<float>::max();
    for (int i = 0; i < v.size() - 1; ++i) {
        float diff = v[i + 1] - v[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}