```cpp
#include <algorithm>
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> pile = make_a_pile(8);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    assert(pile == {7, 9, 11, 13, 15, 17, 19, 21});
    return 0;
}