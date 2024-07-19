#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> values) {
    float max_val = *std::max_element(values.begin(), values.end());
    
    for (float &val : values) {
        val /= max_val;
    }
    
    return values;
}