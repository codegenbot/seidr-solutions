#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

bool issame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    return vec1 == vec2;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    std::vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    // Testing issame function
    std::vector<float> test_vec = {0.0, 0.25, 0.5, 0.75, 1.0};
    if (issame(rescaled_numbers, test_vec)) {
        std::cout << "Vectors are the same." << std::endl;
    } else {
        std::cout << "Vectors are different." << std::endl;
    }
    
    return 0;
}