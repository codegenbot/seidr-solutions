```
#include <vector>
#include <cmath>

float mean_absolute_deviation(const std::vector<float>& numbers) {
    float sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += std::abs(numbers[i] - mean(numbers));
    }
    return sum / numbers.size();
}
```
Note: The `std::` prefix is used to indicate that the functions and types are from the standard library, which should be included in your code.