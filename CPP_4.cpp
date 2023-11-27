#include <vector>
#include <cmath>

float mean_absolute_deviation(vector<float> numbers){
    float sum = 0;
    float mean = 0;
    float deviation = 0;
    
    // Calculate the sum of all numbers
    for(int i=0; i<numbers.size(); i++){
        sum += numbers[i];
    }
    
    // Calculate the mean
    mean = sum / numbers.size();
    
    // Calculate the deviation
    for(int i=0; i<numbers.size(); i++){
        deviation += abs(numbers[i] - mean);
    }
    
    // Calculate the mean absolute deviation
    float mad = deviation / numbers.size();
    
    return mad;
}

int main() {
    // Call the function and assert the result
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
   
    return 0;
}