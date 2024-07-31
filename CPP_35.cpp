#include <algorithm>
#include <cassert>
#include <cmath>
#include <vector>

float max_element(const std::vector<float>& l) {
    float max_num = l[0];
    for (size_t i = 1; i < l.size(); i++) {
        if (l[i] > max_num) {
            max_num = l[i];
        }
    }
    return max_num;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}