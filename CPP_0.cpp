#include <vector>
#include <assert.h>

bool has_close_elements(std::vector<float> v, float epsilon) {
    for (int i = 1; i < v.size(); i++) {
        if (std::abs(v[i] - v[i-1]) <= epsilon) {
            return true;
        }
    }
    return false;
}