#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    // Add appropriate code here or remove the assertion related to get_positive function
    return 0;
}