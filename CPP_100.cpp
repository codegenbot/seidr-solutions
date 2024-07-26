#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    vector<int> pile1 = make_a_pile(5);
    vector<int> pile2 = make_a_pile(7);

    if (issame(pile1, pile2)) {
        cout << "Piles are the same" << endl;
    } else {
        cout << "Piles are different" << endl;
    }

    assert(issame(make_a_pile(8), vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}