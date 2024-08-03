#include <vector>
#include <cassert>
#include <cmath>

float max_element(const std::vector<int>& l) {
    int max = l[0];
    for (int num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

int main() {
    assert(std::abs(static_cast<float>(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}