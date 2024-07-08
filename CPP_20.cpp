```cpp
#include <algorithm>
#include <vector>
#include <limits>

bool isSame(const std::pair<float, float>& p1, const std::pair<float, float>& p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

std::vector<std::pair<float, float>> findClosestElements(std::vector<float> numbers) {
    if(numbers.size() <= 1)
        return {};

    std::pair<float, float> closestPair;
    float minDiff = std::numeric_limits<float>::max();

    for(int i = 0; i < numbers.size() - 1; ++i) {
        for(int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[j] - numbers[i]);
            if(diff < minDiff) {
                minDiff = diff;
                closestPair.first = numbers[i];
                closestPair.second = numbers[j];
            }
        }
    }

    return {{closestPair.first, closestPair.second}};
}

int main() {
    assert(isSame(std::make_pair(2.2f, 3.1f), std::make_pair(2.2f, 3.1f)));
    std::vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    std::vector<std::pair<float, float>> result = findClosestElements(numbers);
    for(const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }
    return 0;