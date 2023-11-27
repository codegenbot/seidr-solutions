#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> stones;
    int numStones = n;

    for(int i = 0; i < n; i++) {
        stones.push_back(numStones);
        if(n % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
    }

    return stones;
}

bool areSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}

int main() {
    assert(areSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}