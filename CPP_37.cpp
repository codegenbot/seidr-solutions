#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& vec) {
    std::vector<float> result = vec;
    std::sort(result.begin(), result.end(), [](float a, float b) {
        if (static_cast<int>(a) % 2 == 0 && static_cast<int>(b) % 2 == 0) {
            return a < b;
        }
        return static_cast<int>(a) % 2 < static_cast<int>(b) % 2;
    });
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    std::cout << "Test passed" << std::endl;
    return 0;
}