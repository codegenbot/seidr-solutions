#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> values) {
    float min_val = *min_element(values.begin(), values.end());
    float max_val = *max_element(values.begin(), values.end());
    float scale = 1 / (max_val - min_val);

    for (float &val : values) {
        val = (val - min_val) * scale;
    }

    return values;
}