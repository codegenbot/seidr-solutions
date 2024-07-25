#include <vector>
#include <algorithm>
#include <cassert>

bool is_same_vector(const std::vector<float>& a, const std::vector<float>& b);

std::vector<float> sort_even(const std::vector<float>& vec) {
    std::vector<float> result = vec;
    std::sort(result.begin(), result.end(), [](float a, float b) {
        return ((int)a % 2 == 0) && ((int)b % 2 == 0) ? a < b : (int)a % 2 < (int)b % 2;
    });

    return result;
}

int main() {
    assert(is_same_vector(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}