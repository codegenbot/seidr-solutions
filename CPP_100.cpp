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
    std::vector<int> pile;
    for (int i = 0; ; i++) {
        if ((n & 1)) // check if n is odd
            pile.push_back(2 * i + 1);
        else
            pile.push_back(2 * i + 2);
        if (++n > i) continue;
        break;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}