#include <vector>
#include <algorithm>

bool samePiles(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    return pile;
}

int main() {
    int n = 8;
    vector<int> pile = make_a_pile(n);
    assert(samePiles(pile, make_a_pile(n)));
    return 0;
}