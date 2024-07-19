#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers{1.2, 3.4, 5.6, 7.8, 9.0};
    assert(has_close_elements(numbers, 2.0) == true);
    return 0;
}