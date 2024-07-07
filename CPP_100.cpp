#include <algorithm>
#include <vector>

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 2; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

void main() {
    vector<int> pile = make_a_pile(8);
    sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}