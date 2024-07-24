#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            stones = i * 2 - 1;
        else
            stones = i * 2;
        pile.push_back(stones);
    }
    return pile;
}