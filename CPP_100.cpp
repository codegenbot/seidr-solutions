```cpp
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        if (n % 2 == 1) {
            pile.push_back(stones);
            stones = stones + 1;
        } else {
            pile.push_back(stones);
            stones = stones + 2;
        }
        n++;
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}