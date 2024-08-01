```c++
#include <algorithm>
#include <vector>
#include <limits>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (std::abs(diff) < min_diff) {
                min_diff = std::abs(diff);
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return closest_pair;
}

int main() {
    std::vector<float> result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    // Rest of your code here
}