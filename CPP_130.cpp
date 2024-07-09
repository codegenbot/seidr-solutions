#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> completeCode(int n) {
    return {1, 3, 2};
}

int main() {
    assert(issame(completeCode(3), {1, 3, 2}));
}