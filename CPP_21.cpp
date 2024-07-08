#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
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

std::vector<float> rescale_to_unit(std::vector<float> vec) {
    std::vector<float> rescaled;
    float max_val = *max_element(vec.begin(), vec.end());

    if (max_val == 0) {
        return vec;
    }

    for (float val : vec) {
        rescaled.push_back(val / max_val);
    }

    return rescaled;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
}