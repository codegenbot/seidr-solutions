#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> test_numbers = {6.5, 3.2, 8.7, 2.1};
    float test_threshold = 1.5;
    assert(has_close_elements(test_numbers, test_threshold) == true);
    return 0;
}