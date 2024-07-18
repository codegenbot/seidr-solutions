#include <iostream>
#include <vector>
#include <cassert>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    float mean = 0.0;
    
    for(auto num : numbers){
        sum += num;
    }
    mean = sum / numbers.size();

    float deviation = 0.0;
    for(auto num : numbers){
        deviation += std::abs(num - mean);
    }
    return deviation / numbers.size();
}

int main() {
    assert (std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);

    return 0;
}