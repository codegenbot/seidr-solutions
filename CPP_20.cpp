#include <vector>
#include <cassert>
#include <cmath>

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