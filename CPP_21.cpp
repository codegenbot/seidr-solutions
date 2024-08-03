#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> rescale_to_unit(std::vector<float> numbers);

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 0.0001) {
            return false;
        }
    }
    return true;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 4.0, 8.0};
    std::vector<float> rescaled_numbers = rescale_to_unit(numbers);
    std::vector<float> expected_result = {0.0, 0.142857, 0.428571, 1.0};
    assert(issame(rescaled_numbers, expected_result));

    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));

    std::cout << "All tests passed." << std::endl;

    return 0;
}