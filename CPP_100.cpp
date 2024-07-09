```cpp
#include <vector>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n * 2;
        }
    }
    return pile;
}

vector<int> main() {
    vector<int> a = make_a_pile(8);
    vector<int> b;
    for(int i = 8; i <= 22; i += 2) {
        b.push_back(i);
    }
    assert(issame(a, b));
    return b;
}