#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& elements, float threshold) {
    for (size_t i = 0; i < elements.size() - 1; ++i) {
        if (std::abs(elements[i] - elements[i + 1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    assert(has_close_elements({1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f}, 0.1) == true);
    
    return 0;
}