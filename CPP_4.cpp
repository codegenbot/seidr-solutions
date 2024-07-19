#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers){
    float sum = 0.0;
    float mean = 0.0;
    
    for (float num : numbers) {
        sum += num;
    }
    
    mean = sum / numbers.size();
    
    float total_diff = 0.0;
    for (float num : numbers) {
        total_diff += std::abs(num - mean);
    }
    
    return total_diff / numbers.size();
}