#include <vector>
#include <cassert>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n, std::vector<int> pile) {
    while (pile.back() <= n) {
        pile.push_back(pile.back() + 2);
    }
    return pile;
}

int main() {
    assert(isSame(std::vector<int>(make_a_pile(8)), std::vector<int>({8,10,12,14,16,18,20,22})));
}