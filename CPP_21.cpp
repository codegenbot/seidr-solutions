#include <vector>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    std::vector<float> result;
    float min_value = numbers[0];
    float max_value = numbers[0];
    
    // Find minimum and maximum values
    for (float number : numbers) {
        if (number < min_value) {
            min_value = number;
        }
        if (number > max_value) {
            max_value = number;
        }
    }
    
    // Rescale numbers to the unit interval
    for (float number : numbers) {
        if (max_value == min_value) {
            result.push_back(0.0); // Avoid division by zero
        } else {
            float rescaled_number = (number - min_value) / (max_value - min_value);
            result.push_back(rescaled_number);
        }
    }
    
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}