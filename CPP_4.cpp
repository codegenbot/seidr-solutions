```
#include <cassert>
#include <vector>

float mean_absolute_deviation(std::vector<float> numbers) {
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - mean(numbers));
    }
    return sum / numbers.size();
}

int main() {
    assert(abs(mean_absolute_deviation(std::vector<float>{1.0, 2.0, 3.0, 4.0, 5.0}) - 6.0 / 5.0) < 1e-4);
}
```