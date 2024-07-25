#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> v) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (std::abs(v[i] - v[i+1]) < 0.1f) {
            return true;
        }
    }
    return false;
}