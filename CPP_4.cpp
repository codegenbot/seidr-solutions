#include <cmath>
#include <vector>

float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0f;
    for (float num : numbers) {
        sum += num;
    }
    float mean = sum / numbers.size();
    float mad = 0.0f;
    for (float num : numbers) {
        mad += abs(num - mean);
    }
    return mad / numbers.size();
}

int main() {
    assert (abs(mean_absolute_deviation({1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0/5.0) < 1e-4);
    return 0;
}