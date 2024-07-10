#include <vector>
#include <cassert>
#include <cmath>

float max_element(const std::initializer_list<float>& l) {
    assert(!l.empty());
    float max_val = *l.begin();
    
    for (float val : l) {
        if (std::abs(val) > std::abs(max_val)) {
            max_val = val;
        }
    }
    
    return max_val;
}

int main() {
    float result = max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});

    return 0;
}