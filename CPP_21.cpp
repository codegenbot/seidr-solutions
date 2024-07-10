#include <vector>
#include <iostream>
#include <cmath>

bool issame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (std::abs(vec1[i] - vec2[i]) > 0.0001) {
            return false;
        }
    }

    return true;
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = numbers[0];
    float max_num = numbers[0];
    for (float num : numbers) {
        if (num < min_num) {
            min_num = num;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> expected_output = {0.0, 0.25, 0.5, 0.75, 1.0};

    std::vector<float> rescaled_numbers = rescale_to_unit(numbers);

    if (issame(rescaled_numbers, expected_output)) {
        std::cout << "Output matches expected result." << std::endl;
    } else {
        std::cout << "Output does not match expected result." << std::endl;
    }

    return 0;
}