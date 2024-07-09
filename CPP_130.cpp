#include <vector>
#include <cassert>

std::vector<int> completeCode(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(completeCode(3), {1, 3, 2}));
    assert(issame(completeCode(1), {1}));
}