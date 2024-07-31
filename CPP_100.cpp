#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i % 2 == 0 ? i + 1 : i);
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}