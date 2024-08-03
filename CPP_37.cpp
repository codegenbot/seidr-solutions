#include <vector>
#include <algorithm>

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> sorted;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            sorted.push_back(num);
        }
    }
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}