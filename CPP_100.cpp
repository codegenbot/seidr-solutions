bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = n; i <= n * 2; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}