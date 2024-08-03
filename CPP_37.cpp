#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> sorted = v;
    std::sort(sorted.begin(), sorted.end(), [](float a, float b) {
        return ((int)a % 2 == 0 && (int)b % 2 == 0) ? a > b : (int)a % 2 < (int)b % 2;
    });
    return sorted;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = v;
    tmp = sort_even(tmp);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));

    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));

    return 0;
}