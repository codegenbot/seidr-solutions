#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // Find the minimum and maximum numbers in the vector
    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    std::vector<float> rescaled_numbers;
    
    // Apply linear transform to each number in the vector
    for(int i = 0; i < numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    assert(rescale_to_unit(std::vector<float>{12.0, 11.0, 15.0, 13.0, 14.0}) == std::vector<float>{0.25, 0.0, 1.0, 0.5, 0.75});
    
    return 0;
}