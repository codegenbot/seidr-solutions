#include <vector>
#include <algorithm>

bool checkIfSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    return pile;
}

int main() {
    assert(checkIfSame(make_a_pile(8), vector<int>({0, 1, 3, 6, 10, 15, 21, 28})));
    return 0;
}