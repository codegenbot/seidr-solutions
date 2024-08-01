#include <vector>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    
    return 0;
}