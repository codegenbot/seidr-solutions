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
    std::vector<float> numbers = {1.5, 2.5, 3.6, 4.0, 5.2};
    float threshold = 0.6;
    
    assert(has_close_elements(numbers, threshold) == true);

    return 0;
}