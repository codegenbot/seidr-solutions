#include <vector>
#include <cmath>

float mean(vector<float> numbers) {
    return (accumulate(numbers.begin(), numbers.end(), 0.0f) /
            static_cast<unsigned long>(numbers.size()));
}

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0;
    for (float num : numbers) {
        sum += abs(num - mean(numbers));
    }
    return sum / numbers.size();
}

int main() {
    assert(abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}