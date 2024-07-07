#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> pile = make_a_pile(8);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}