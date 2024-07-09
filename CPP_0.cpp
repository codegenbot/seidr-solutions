```cpp
#include <vector>

bool has_close_elements(const std::vector<float>& elements, float tolerance) {
    for (int i = 1; i < elements.size(); ++i) {
        if (std::abs(static_cast<float>(elements[i]) - static_cast<float>(elements[i-1])) <= tolerance) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a({1.0, 2.0, 3.9, 4.0, 5.0, 2.0});
    assert(has_close_elements({1.0, 2.0, 3.9, 4.0, 5.0}, 0.0) == false);
    return 0;
}