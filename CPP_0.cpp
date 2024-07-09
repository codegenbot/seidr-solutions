```cpp
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& elements, float tolerance) {
    for (int i = 1; i < elements.size(); ++i) {
        if (std::abs(elements[i] - elements[i-1]) <= tolerance) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a(6);
    a[0] = 1.0f; a[1] = 2.0f; a[2] = 3.9f; a[3] = 4.0f; a[4] = 5.0f; a[5] = 2.0f;
    assert(has_close_elements(a, 0.0f) == false);
    return 0;
}