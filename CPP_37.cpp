#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float evenVal = 0.0f;
            for (float val : l) {
                if (std::abs(val - static_cast<int>(val)) < 1e-9) {
                    evenVal = val;
                    break;
                }
            }
            result.push_back(evenVal);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}