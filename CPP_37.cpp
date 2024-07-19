```cpp
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

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float maxEven = -INFINITY;
            for (float val : l) {
                if (std::abs(val - static_cast<int>(val)) < 1e-9) {
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

int main() {
    assert(std::equal(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}).begin(), sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}).end(), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}