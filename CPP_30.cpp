#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> input) {
    // Implement logic to get positive values from input
    return input;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}