#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(get_positive({}), {}));
}