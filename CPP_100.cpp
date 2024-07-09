#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
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