```cpp
#include <vector>
#include <cmath>

float mean_absolute_deviation(const vector<float>& numbers) {
  float sum = 0;
  for (auto& num : numbers) {
    sum += std::abs(num - mean(numbers));
  }
  return sum / numbers.size();
}
```