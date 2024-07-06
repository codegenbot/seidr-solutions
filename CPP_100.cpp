```cpp
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.insert(pile.end(), i * 2 - 1);
        } else {
            pile.insert(pile.end(), i * 2);
        }
    }
    return pile;
}