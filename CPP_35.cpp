#include <vector>
#include <cassert>
#include <cmath>

float max_element(const std::vector<float>& l) {
    float max = l[0];
    for (float num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main() {
    assert(std::abs(max_element(std::vector<float>{5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}