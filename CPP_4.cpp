#include <vector>

float mean_absolute_deviation(std::vector<float> numbers){
    float sum = 0;
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    float mean = sum / numbers.size();
    
    float mad_sum = 0;
    for(int i=0; i<numbers.size(); i++){
        mad_sum += std::abs(numbers[i] - mean);
    }
    
    float mad = mad_sum / numbers.size();
    return mad;
}