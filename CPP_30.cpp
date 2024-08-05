#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.empty() && b.empty();
}

int main() {
    assert(issame(std::vector<float>{}, std::vector<float>{}));
}