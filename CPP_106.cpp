#include <vector>
#include <cassert>

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(const std::vector<int>& vecA, const std::vector<int>& vecB) {
    if (vecA.size() != vecB.size()) {
        return false;
    }
    for (size_t i = 0; i < vecA.size(); ++i) {
        if (vecA[i] != vecB[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(f(3), {1, 2, 3}));
    return 0;
}