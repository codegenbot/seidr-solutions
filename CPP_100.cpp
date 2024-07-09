#include <vector>

bool same(std::vector<int> a, std::vector<int> b);

std::vector<int> make_a_pile(int n);

int main() {
    assert(same(make_a_pile(8), {1,2,4,7,14,28,56,112}));
}

bool same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    while (stones <= n) {
        pile.push_back(stones);
        stones *= 2;
    }
    return pile;