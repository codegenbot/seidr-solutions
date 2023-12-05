#include <iostream>
#include <vector>

float max_element(const std::vector<float>& v) {
    float max = v[0];
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}