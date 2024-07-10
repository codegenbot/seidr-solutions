#include <vector>
#include <algorithm>
#include <cassert>

std::pair<float, float> find_closest_elements(std::vector<float> numbers);

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

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
    std::vector<float> numbers = {1.2, 3.4, 5.6, 7.8};
    std::pair<float, float> result = find_closest_elements(numbers);
    assert(result == std::make_pair(3.4f, 5.6f));
    assert
    (
        issame
        (
            find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}).first, 
            std::make_pair(2.2f, 3.1f)
        )
    );
    return 0;
}