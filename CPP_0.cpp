#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(const std::vector<float>& arr, float target) {
    for (float num : arr) {
        if (std::abs(num - target) < 0.0001) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    return 0;
}