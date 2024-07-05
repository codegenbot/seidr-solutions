#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; ++i) {
        pile.push_back(stones);
        stones += 2;
    }
    return pile;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    assert(issame(make_a_pile(5), {5, 7, 9, 11, 13}));
    cout << "All tests passed!" << endl;
    return 0;
}