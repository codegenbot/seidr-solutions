```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

int main() {
    std::vector<int> pile = make_a_pile(8);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    
    assert(std::vector<int>(pile.begin(), pile.end()) == std::vector<int>({7, 9, 11, 13, 15, 17, 19, 21}));
    
    return 0;
}