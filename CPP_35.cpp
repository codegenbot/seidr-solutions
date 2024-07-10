#include <vector>
#include <cassert>
#include <cmath>
#include <initializer_list>

float max_element(const std::initializer_list<float>& l) {
    assert(!l.size());
    float max_val = *l.begin();
    for (const auto& val : l) {
        if (std::abs(val) > std::abs(max_val)) {
            max_val = val;
        }
    }
    return max_val;
}

int main() {
    max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return 0;
}