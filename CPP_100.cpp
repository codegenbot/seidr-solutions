#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    for (int i = 0; i < n; ++i) {
        pile.push_back(current);
        if (current % 2 == 1)
            current += 2;
        else
            current += 1;
    }
    return pile;
}