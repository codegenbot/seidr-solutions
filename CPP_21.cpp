#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    
    std::vector<float> rescaled_numbers;
    for (float num : numbers) {
        rescaled_numbers.push_back((num - min_num) / (max_num - min_num));
    }
    
    return rescaled_numbers;
}

bool issame(const std::vector<float>& vec1, const std::vector<float>& vec2) {
    return vec1 == vec2;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    
    std::vector<float> rescaled_numbers = rescale_to_unit(numbers);
    
    for (float num : rescaled_numbers) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;
    
    std::vector<float> same_numbers = rescale_to_unit(numbers);
    
    if (issame(rescaled_numbers, same_numbers)) {
        std::cout << "The rescaled vectors are the same." << std::endl;
    } else {
        std::cout << "The rescaled vectors are different." << std::endl;
    }
    
    return 0;
}