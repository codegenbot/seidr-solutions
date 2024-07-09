```cpp
#include <vector>

bool has_close_elements(const std::vector<float>& elements, float tolerance) {
    for (int i = 1; i < elements.size(); ++i) {
        if (std::abs(elements[i] - elements[i-1]) <= tolerance) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements({1.0f, 2.0f, 3.9f, 4.0f, 5.0f}, 0.5f) == false);
    return 0;
}