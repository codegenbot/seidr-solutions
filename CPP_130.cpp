#include <cassert>
#include <vector>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

std::vector<int> tri(int n) {
    return {n, n + 2};
}

int main() {
    assert(issame(tri(1), std::vector<int>({1, 3})));    
    return 0;
}