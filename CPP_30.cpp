#include <vector>
#include <algorithm>
#include <assert.h>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), [](float x, float y){return std::abs(x) == std::abs(y);});
}

int main() {
    assert (issame(get_positive({}), {}));
    return 0;
}