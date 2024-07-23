#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> factors1 = factorize(12);
    std::vector<int> factors2 = factorize(12);
    
    assert(issame(factors1, factors2));
    
    return 0;
}