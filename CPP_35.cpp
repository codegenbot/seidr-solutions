#include <vector>
#include <cassert>
#include <cmath>
#include <initializer_list>

float max_element(const std::initializer_list<float>& l) {
    assert(!l.empty());
    float max_val = *(l.begin());
    for (auto it = std::next(l.begin()); it != l.end(); ++it) {
        if (*it > max_val) {
            max_val = *it;
        }
    }
    return max_val;
}

int main() {
    float result = max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10});
    return 0;
}