Here is the solution:

#include <algorithm>
#include <vector>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    float closestElements[2];

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestElements[0] = numbers[i];
            closestElements[1] = numbers[i + 1];
        }
    }

    return std::vector<float>(closestElements, closestElements + 2);
}