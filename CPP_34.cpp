#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(uniqueVec.begin(), uniqueVec.end());
    auto it = uniqueVec.begin();
    while (it != uniqueVec.end()) {
        auto nextIt = it + 1;
        while (nextIt != uniqueVec.end() && *it == *nextIt) {
            ++nextIt;
        }
        it = nextIt;
    }
    std::vector<int> unique(uniqueVec.begin(), it);
    assert(issame(unique, {0, 2, 3, 5, 9, 123}));
}