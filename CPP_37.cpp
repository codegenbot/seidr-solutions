```cpp
#include <vector>
#include <cmath>
#include <initializer_list>

bool issame(float a, float b) {
    return std::abs(a - b) < 0.0001;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            float minVal = l[0];
            for (float val : l) {
                if (!issame(val, minVal)) {
                    minVal = val;
                }
            }
            result[i] = minVal;
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

std::vector<float> sort_even_elements(std::vector<float> l) {
    std::vector<float> result(l.size());
    float minVal = l[0];
    for (float val : l) {
        if (!issame(val, minVal)) {
            minVal = val;
        }
    }
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = minVal;
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(issame(std::equal_to<float>(), sort_even_elements({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}),{-12,-10,2,3,4,5,8,11,12,23}));
}