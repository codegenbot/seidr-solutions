#include <initializer_list>
#include <vector>
#include <cmath>

float mean(std::vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0.0;
    for (float num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
    return 0;
}