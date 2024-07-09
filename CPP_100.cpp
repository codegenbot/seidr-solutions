#include <iostream>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.insert(pile.begin(), i);
    return pile;
}