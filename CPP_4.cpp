#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    
    float mad = 0.0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    mad /= numbers.size();
    
    return mad;
}

int main() {
    // Your main function code goes here
    return 0;
}