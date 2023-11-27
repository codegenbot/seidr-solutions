#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers){
    float sum = 0;
    float mean = 0;
    float mad = 0;
    
    // Calculate the sum of all numbers
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate the mean of the dataset
    mean = sum / numbers.size();
    
    // Calculate the mean absolute deviation
    for(int i = 0; i < numbers.size(); i++){
        mad += std::abs(numbers[i] - mean);
    }
    
    mad = mad / numbers.size();
    
    return mad;
}

int main(){
    assert (std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}