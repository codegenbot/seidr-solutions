#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

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

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> input = {12.0, 11.0, 15.0, 13.0, 14.0};
    std::vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    std::vector<float> output = rescale_to_unit(input);
    
    if (issame(output, expected)) {
        std::cout << "Output matches expected result." << std::endl;
    } else {
        std::cout << "Output does not match expected result." << std::endl;
    }

    return 0;
}