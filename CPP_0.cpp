#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(const std::vector<float>& arr, float target) {
    for (std::size_t i = 0; i < arr.size() - 1; ++i) {
        if (std::abs(arr[i] - arr[i + 1]) <= target)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5f) == false);

    return 0;
}