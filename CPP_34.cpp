#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> unique(vector<int> l) {
    return std::vector<int>(l.begin(), std::unique(l.begin(), l.end()));
}

auto main() -> int {
    assert(issame({0, 2, 3, 5, 9, 123}, {0, 2, 3, 5, 9, 123}));
    return 0;
}

bool issame(vector<int> a, vector<int> b) {
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