#include <vector>
#include <cassert>

std::vector<int> completeCode(int n) {
    return {1, n, 2};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(completeCode(3), {1, 3, 2}));
} 