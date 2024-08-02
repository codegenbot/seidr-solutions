#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), [](float x, float y){return abs(x-y)<1e-9;});
}

int main() {
    assert (std::equal(get_positive({}), {}));
    return 0;
}