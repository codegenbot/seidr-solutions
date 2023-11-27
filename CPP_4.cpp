#include <vector>
#include <cassert>

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

int main(){
    assert (std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}