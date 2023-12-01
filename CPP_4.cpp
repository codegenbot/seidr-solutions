#include <iostream>
#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float mean = 0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();
    
    float mad = 0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    mad /= numbers.size();
    
    return mad;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0};
    float result = mean_absolute_deviation(numbers);
    std::cout << result << std::endl;
    
    return 0;
}