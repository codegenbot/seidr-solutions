#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int size) {
    std::vector<int> pile;
    for (int i = 0; i < size; ++i) {
        pile.push_back(8 + 2 * i);
    }
    return pile;
}

int main() {
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}