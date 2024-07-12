#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l) {
    return {num for num in l if num > 0};
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}