#include <vector>
#include <cassert>

std::vector<int> completeCode(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = i + 1;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(completeCode(3), {1, 3, 2}));
}