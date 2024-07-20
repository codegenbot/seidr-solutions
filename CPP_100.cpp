#include <vector>
#include <iostream>

using namespace std;

bool issame(int n1, int n2) {
    if (n1 == n2)
        return true;
    else
        return false;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }
    return pile;
}