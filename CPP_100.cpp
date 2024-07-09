#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (i % 4 != 0) continue;
            result.push_back(i);
        } else {
            if (i % 4 == 3) break;
            result.push_back(i);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // ...
}