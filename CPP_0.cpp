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
    std::vector<float> a;
    a.push_back(1.0f);
    a.push_back(2.0f);
    a.push_back(3.9f);
    a.push_back(4.0f);
    a.push_back(5.0f);
    a.push_back(2.0f);
    assert(has_close_elements(a, 0.0f) == false);
    return 0;
}