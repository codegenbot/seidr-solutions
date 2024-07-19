#include <vector>
#include <initializer_list>

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
            bool isInt = issame(l[i], static_cast<int>(l[i]));
            for (float val : l) {
                if (issame(val, static_cast<int>(val)) && !isInt) {
                    maxEven = std::max(maxEven, val);
                    isInt = true;
                }
            }
            result.push_back(isInt ? l[i] : maxEven);
        }
    }
    return result;
}

int main() {
    assert(std::equal(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}).begin(), sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}).end(), {-12.0f, 8.0f, 3.0f, 4.0f, 5.0f, 2.0f, 12.0f, 11.0f, 23.0f, -10.0f}));
    return 0;
}