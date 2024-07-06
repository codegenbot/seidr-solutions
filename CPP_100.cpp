#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    sort(pile.begin(), pile.end());
    return pile;
}