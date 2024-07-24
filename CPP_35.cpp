#include <algorithm>

float max_value(const std::vector<float> &l) {
    float max = l.front();
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return *std::max_element(l.begin(), l.end());
}