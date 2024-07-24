```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

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
    std::vector<float> numbers;
    float num;
    for(int i = 0; i < 5; i++) {
        std::cin >> num;
        numbers.push_back(num);
    }
    float result = mean_absolute_deviation(numbers);
    std::cout << "Mean Absolute Deviation: " << result << std::endl;
    return 0;
}