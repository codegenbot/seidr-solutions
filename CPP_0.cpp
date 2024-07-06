#include <vector>

std::vector<float> filterLargeNumbers(std::vector<float> numbers, float threshold) {
    std::vector<float> result;
    
    for(float num : numbers){
        if(num > threshold){
            result.push_back(num);
        }
    }
    
    return result;
}