#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    // Logic to factorize n and store factors in the vector
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    return 0;
}