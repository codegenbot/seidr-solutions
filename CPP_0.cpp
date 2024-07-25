#include <vector>
#include <cmath>

bool has_close_elements(std::vector<float> v) {
    for (int i = 0; i < v.size() - 1; i++) {
        if (std::abs(v[i] - v[i + 1]) <= 0.01f) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    
    assert(has_close_elements(a));
    return 0;
}