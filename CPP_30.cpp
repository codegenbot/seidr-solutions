#include <vector> // Include the vector header file

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& vec) {
    std::vector<float> positive_values;
    for (const auto& val : vec) {
        if (val > 0) {
            positive_values.push_back(val);
        }
    }
    
    return positive_values;
}