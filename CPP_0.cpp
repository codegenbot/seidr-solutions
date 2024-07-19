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
    std::vector<float> numbers = {2.5, 1.3, 4.7, 3.1}; // Example input values
    float threshold = 1.5; // Example threshold
    assert(has_close_elements(numbers, threshold));
    return 0;
}