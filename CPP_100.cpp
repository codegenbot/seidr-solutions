#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

void main() {
    std::vector<int> pile = make_a_pile(20);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    if (!issame(make_a_pile(8), pile)) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
}