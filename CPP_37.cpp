#include <vector>
#include <algorithm>

namespace std {
    bool issame(const std::vector<float>& a, const std::vector<float>& b) {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    }
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> even_vec;
    for (float num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            even_vec.push_back(num);
        }
    }
    std::sort(even_vec.begin(), even_vec.end());
    return even_vec;
}