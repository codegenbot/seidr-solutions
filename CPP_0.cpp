#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers{5.4, 2.1, 8.9, 6.7, 3.2};
    float threshold = 1.5;
    assert(has_close_elements(numbers, threshold) == true);
    return 0;
}