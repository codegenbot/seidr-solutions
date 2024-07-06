#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}