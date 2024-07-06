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

float find_closest_elements(std::vector<float> a, float x) {
    float min_diff = std::numeric_limits<float>::max();
    float result;

    for (int i = 0; i < a.size(); ++i)
        if (std::abs(a[i] - x) < min_diff) {
            min_diff = std::abs(a[i] - x);
            result = a[i];
        }

    return result;
}