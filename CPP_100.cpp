#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; i -= 2) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    assert(std::issame(std::vector<int>(make_a_pile(8).begin(), make_a_pile(8).end()), std::vector<int>({8, 6, 4, 2})));
    return 0;
}