#include <vector>
#include <cmath>

bool issame(const vector<float>& v1, const vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
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

int main() {
    std::vector<float> expected = {2.2, 3.1};
    std::vector<float> input = {1.1, 2.2, 3.1, 4.1, 5.1};
    std::vector<float> result = find_closest_elements(input);

    if (issame(result, expected)) {
        return 0;
    } else {
        return 1;
    }
}