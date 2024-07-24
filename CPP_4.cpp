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
        mad += abs(num - mean);
    }
    mad /= numbers.size();
    
    return mad;
}

int main() {
    // main function implementation here
    return 0;
}