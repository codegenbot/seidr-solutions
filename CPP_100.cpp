#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; ; i++) {
        if ((n & 1)) 
            pile.push_back(2 * i + 1);
        else
            pile.push_back(2 * i + 2);
        if (++n > i) continue;
        break;
    }
    return pile;
}