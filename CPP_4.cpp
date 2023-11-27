#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers){
    float sum = 0;
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    float mean = sum / numbers.size();
    
    float deviation_sum = 0;
    for(int i=0; i<numbers.size(); i++){
        deviation_sum += fabs(numbers[i] - mean);
    }
    
    return deviation_sum / numbers.size();
}