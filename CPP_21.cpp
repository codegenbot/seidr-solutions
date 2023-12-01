#include <vector>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    // Find the minimum and maximum values in the input vector
    float min_val = numbers[0];
    float max_val = numbers[0];
    for (float num : numbers) {
        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }
    }
    
    // Rescale each value to the unit range [0, 1]
    std::vector<float> rescaled_numbers;
    for (int i = 0; i < numbers.size(); i++) {
        float rescaled_val = (numbers[i] - min_val) / (max_val - min_val);
        rescaled_numbers.push_back(rescaled_val);
    }
    
    return rescaled_numbers;
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