#include <initializer_list>
#include <vector>
#include <cassert>

bool compare_vectors(std::vector<int> a, std::vector<int> b) {
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

int verify_result() {
    assert(compare_vectors(make_a_pile(8), {8,10,12,14,16,18,20,22}));
    return 0;
}