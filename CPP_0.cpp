#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers = {1.2, 3.4, 5.6, 7.8};
    float threshold = 1.0;

    assert(has_close_elements(numbers, threshold) == true);

    return 0;
}