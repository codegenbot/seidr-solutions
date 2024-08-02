#include <vector>
#include <assert.h>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert (std::equal(get_positive({}), {}));
    return 0;
}