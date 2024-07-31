#include <vector>

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
    assert(issame(std::vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}, std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}