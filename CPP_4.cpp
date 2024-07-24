```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <ext/new_allocator.h>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(std::vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
}

int main() {
    std::vector<float, std::ext::new_allocator<float>> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    float result = mean_absolute_deviation(numbers);
    std::cout << "Mean Absolute Deviation: " << result << std::endl;
    return 0;
}