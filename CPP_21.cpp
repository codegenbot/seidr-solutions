#include <vector>
#include <cassert>

std::vector<float> rescale_to_unit(const std::vector<float>& input) {
    float min_val = *std::min_element(input.begin(), input.end());
    float max_val = *std::max_element(input.begin(), input.end());
    std::vector<float> rescaled;
  
    for (float val : input) {
        float rescaled_val = (val - min_val) / (max_val - min_val);
        rescaled.push_back(rescaled_val);
    }
  
    return rescaled;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
  
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
  
    return true;
}