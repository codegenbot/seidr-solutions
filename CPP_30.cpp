#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    return 0;
}