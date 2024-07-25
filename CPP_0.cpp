#include <vector>
#include <assert.h>

bool has_close_elements(const std::vector<float>& elements, float tolerance) {
    for (size_t i = 0; i < elements.size() - 1; ++i) {
        if (std::abs(elements[i] - elements[i + 1]) <= tolerance)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    
    assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5) == false);
    
    return 0;
}