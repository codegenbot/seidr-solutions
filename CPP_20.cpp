#include <vector>
#include <cmath>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::abs(numbers[0] - numbers[1]);
    float num1 = numbers[0];
    float num2 = numbers[1];

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    std::vector<float> result;
    result.push_back(num1);
    result.push_back(num2);

    return result;
}

bool issame(std::vector<float> vec1, std::vector<float> vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }

    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<float> input = {1.1, 2.2, 3.1, 4.1, 5.1};
    std::vector<float> expected_output = {2.2, 3.1};
    std::vector<float> result = find_closest_elements(input);

    bool is_same_result = issame(result, expected_output);
    
    return 0;
}