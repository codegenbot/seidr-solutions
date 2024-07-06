#include<vector>
#include<cmath>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - this->mean(numbers));
    }
    return sum / numbers.size();
}

float mean(std::vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}