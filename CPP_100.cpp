#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones++;
        }
        else {
            stones /= 2;
        }
    }
    return pile;
}