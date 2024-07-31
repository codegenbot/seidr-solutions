#include <vector>
#include <cmath>
#include <algorithm>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    return 0;
}