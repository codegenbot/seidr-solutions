```cpp
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    if (a > b)
        return false;
    else 
        return true;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<std::pair<float, float>> result;

    if (numbers.size() <= 1) {
        return result;
    }

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            bool isSame = issame(numbers[i], numbers[j]);
            if (!isSame && abs(numbers[i] - numbers[j]) < abs(result[0].first - result[0].second)) {
                result.clear();
                result.push_back(std::make_pair(numbers[i], numbers[j]));
            }
        }
    }

    return result;
}