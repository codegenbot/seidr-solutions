#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
}