#include <vector>
#include <cassert>

namespace std {
    std::vector<float> rescale_to_unit(const std::vector<float>& values) {
        float min_val = *std::min_element(values.begin(), values.end());
        float max_val = *std::max_element(values.begin(), values.end());

        std::vector<float> rescaled_values;
        for (float val : values) {
            float rescaled_val = (val - min_val) / (max_val - min_val);
            rescaled_values.push_back(rescaled_val);
        }

        return rescaled_values;
    }

    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
        if (a.size() != b.size()) {
            return false;
        }

        for (size_t i = 0; i < a.size(); ++i) {
            if (std::abs(a[i] - b[i]) > 0.0001) {
                return false;
            }
        }

        return true;
    }
}