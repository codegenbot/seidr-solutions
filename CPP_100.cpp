#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; ++i) {
        if (numStones % 2 == 0) {
            pile.push_back(numStones);
        } else {
            pile.push_back(numStones + 1);
        }
        numStones += (numStones % 2 == 0 ? 2 : 1);
    }
    return pile;
}