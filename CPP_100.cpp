```cpp
#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
        pile.push_back(numStones);
    }
    return pile;
}