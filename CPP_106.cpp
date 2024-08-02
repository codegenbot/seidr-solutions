#include <vector>
#include <cassert>

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
    assert(issame(std::vector<int>{1, 2, 6}, std::vector<int>{1, 2, 6})); 
    return 0;
}