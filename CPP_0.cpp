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
    std::vector<float> numbers = {1.5, 2.5, 3.5}; // Example numbers initialization
    float threshold = 1.0; // Example threshold value
    bool result = has_close_elements(numbers, threshold);
    assert(result == true); // Assert for correctness, modify as needed
    return 0;
}