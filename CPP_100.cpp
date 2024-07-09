#include <vector>
#include <algorithm>

bool samePiles(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int n = 8;
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    assert(samePiles(pile, pile));
    return 0;
}