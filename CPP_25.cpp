#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n){
    // implementation of factorize function
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
}