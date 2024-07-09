```
#include <vector>

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(std::vector<int> pile, int n) {
    while (pile.back() <= n) {
        pile.push_back(pile.back() + 2);
    }
    return pile;
}

int main() {
    assert(same(make_a_pile({}, 8), {8,10,12,14,16,18,20,22}));
    return 0;
}