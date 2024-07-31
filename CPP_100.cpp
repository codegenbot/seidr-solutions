#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; ; i++) {
        if ((n & 1)) // check if n is odd
            pile.push_back(2 * i + 1);
        else
            pile.push_back(2 * i + 2);
        if (++n > i) continue;
        break;
    }
    return pile;
}