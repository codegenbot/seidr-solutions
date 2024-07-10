#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return closest_elements;
}

int main() {
    assert(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}) == std::make_pair(2.2f, 3.1f));
    
    return 0;
}