```c++
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0)
            pile.push_back((pile.empty() ? n : pile.back()) + 1);
        else
            pile.push_back((pile.empty() ? n : pile.back()) + 2);
    }
    return pile;
}