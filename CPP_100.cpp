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