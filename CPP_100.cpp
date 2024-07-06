#include <vector>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
        pile.push_back(numStones);
    }
    return pile;
}