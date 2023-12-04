```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min = *min_element(numbers.begin(), numbers.end());
    float max = *max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back((numbers[i] - min) / (max - min));
    }
    return result;
}
```