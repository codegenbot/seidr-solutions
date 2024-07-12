```
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& v, float epsilon) {
    for (size_t i = 0; i < v.size() - 1; ++i) {
        if (std::abs(v[i] - v[i + 1]) <= epsilon)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    
    assert(has_close_elements({1.0, 2.0, 3.9, 4.0, 5.0, 2.2}, 0.1) == true);
    
    return 0;
}