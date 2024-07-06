```cpp
#include <vector>
#include <algorithm>

std::vector<float> filterLargeNumbers(std::vector<float> numbers, float threshold) {
    std::vector<float> largeNumbers;
    for (float number : numbers) {
        if (number > threshold) {
            largeNumbers.push_back(number);
        }
    }
    return largeNumbers;
}