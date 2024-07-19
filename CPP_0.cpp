#include <vector>
#include <algorithm>
#include <cassert>

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
    std::vector<float> numbers{1.5, 2.5, 3.5, 4.5, 5.5};
    assert(has_close_elements(numbers, 1.0) == true);
    return 0;
}