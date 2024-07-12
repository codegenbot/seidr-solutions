#include <vector>
#include <algorithm>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::fabs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);
    return 0;
}