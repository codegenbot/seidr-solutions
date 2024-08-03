#include <vector>

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> result;
    for (size_t i = 0; i < v.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(v[i]);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}