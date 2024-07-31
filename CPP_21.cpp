#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> rescale_to_unit(std::vector<float> values) {
    float min_val = *std::min_element(values.begin(), values.end());
    float max_val = *std::max_element(values.begin(), values.end());
    std::vector<float> rescaled_values;
    for(const auto& val : values){
        rescaled_values.push_back((val - min_val) / (max_val - min_val));
    }
    return rescaled_values;
}