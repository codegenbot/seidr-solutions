#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::pair<int, int> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2*i - 1, 2*i});
    }
    return *std::max_element(pile.begin(), pile.end());
}

int main() {
    assert(issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
}