#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<float>{1.0f}, std::vector<float>{}));
    return 0;
}