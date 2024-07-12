```cpp
#include <vector>
#include <cassert>
#include <iostream>
#include <initializer_list>

using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    int stones = 1;
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        pile.push_back(stones);
        stones++;
    }
    return pile;
}

vector<int> make_b_pile(int n) {
    int stones = 2;
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if ((i & 1) == 0)
            pile.push_back(stones);
        else
            pile.push_back(1);
        stones += 3;
    }
    return pile;
}