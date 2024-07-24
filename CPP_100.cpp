```c++
#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; i++) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int pile[] = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(isSame(make_a_pile(8), std::vector<int>(pile, pile+8)));
    return 0;
}