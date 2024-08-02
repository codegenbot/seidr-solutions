#include <algorithm>
#include <vector>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i+1]) < threshold) {
            return true;
        }
    }
    return false;
}