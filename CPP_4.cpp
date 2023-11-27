#include <vector> 

float mean_absolute_deviation(const std::vector<float>& numbers){
    float sum = 0;
    float mean = 0;
    float mad = 0;

    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }

    mean = sum / numbers.size();

    for(int i = 0; i < numbers.size(); i++){
        mad += abs(numbers[i] - mean);
    }

    mad = mad / numbers.size();

    return mad;
}