```cpp
#include <vector>
#include <assert.h>

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

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile(n, n);
    for (int i = n; i > 0; i--) {
        pile[i-1] = i * 2;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(4), {4, 6, 8, 10}));
}