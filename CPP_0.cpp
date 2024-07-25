```cpp
#include <vector>
#include <assert.h>

bool has_close_elements(const std::::vector<float>& vec, float tolerance) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i + 1]) <= tolerance)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.1f));
    return 0;
}