#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}

int main() {
    assert(abs(*std::max_element({5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f}.begin(), {5.0f, 3.0f, -5.0f, 2.0f, -3.0f, 3.0f, 9.0f, 0.0f, 124.0f, 1.0f, -10.0f}.end()) - 124.0f) < 1e-4);
    return 0;
}