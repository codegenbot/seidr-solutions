```cpp
#include <vector>
#include <assert.h>

bool has_close_elements(const std::vector<float>& v, float threshold) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (std::abs(v[i] - v[i + 1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> vec = {1.0, 2.0, 3.0};
    assert(has_close_elements(vec, 0.5));
}