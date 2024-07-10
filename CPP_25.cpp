#include <vector>
#include <cassert>

std::vector<int> factorize(int n);

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}