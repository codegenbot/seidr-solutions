#include <vector>
#include <cmath>

float mean_absolute_deviation(std::vector<float> numbers){
    float mean = 0.0;
    for (float num : numbers) {
        mean += num;
    }
    mean /= numbers.size();

    float mad = 0.0;
    for (float num : numbers) {
        mad += std::abs(num - mean);
    }
    mad /= numbers.size();

    return mad;
}