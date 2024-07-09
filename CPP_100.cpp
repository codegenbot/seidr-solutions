#include <vector>
#include <algorithm>

bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    return pile;
}

int main() {
    assert(areEqual(make_a_pile(8), make_a_pile(8)));
    return 0;
}