#include <vector>
#include <cmath>
#include <limits>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    float min_diff = std::numeric_limits<float>::infinity();

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
            }
        }
    }

    std::vector<float> result;

    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff == min_diff) {
                result.push_back(numbers[i]);
                result.push_back(numbers[j]);
            }
        }
    }

    return result;
}