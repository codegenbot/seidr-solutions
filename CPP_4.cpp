#include <vector>
#include <numeric>

float mean(vector<float> numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    for (auto num : numbers) {
        sum += std::abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

int main() {
    assert(std::abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
}