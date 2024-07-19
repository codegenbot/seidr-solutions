```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; ++i) {
        if ((stones % 2) == 1) {
            pile.push_back(stones);
        } else {
            pile.push_back(stones + 1);
        }
        stones += 2;
    }
    return pile;
}