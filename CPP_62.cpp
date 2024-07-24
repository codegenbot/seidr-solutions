#include <vector>

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

std::vector<float> derivative(const std::vector<float>& input) {
    std::vector<float> result;
    
    for (size_t i = 1; i < input.size(); ++i) {
        result.push_back(input[i] - input[i - 1]);
    }
    
    return result;
}

int main() {
    std::vector<float> input = {1.0, 2.0, 4.0, 7.0};
    std::vector<float> expected_output = {1.0, 2.0, 3.0};
    
    std::vector<float> result = derivative(input);
    
    if (issame(result, expected_output)) {
        // Output matches expected result
    } else {
        // Output does not match expected result
    }

    return 0;
}