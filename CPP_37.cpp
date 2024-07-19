#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float maxEven = -INFINITY;
            for (float val : l) {
                if (issame(val, static_cast<int>(val))) {
                    maxEven = std::max(maxEven, val);
                }
            }
            result.push_back(maxEven);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}