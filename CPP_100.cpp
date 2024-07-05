#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; ++i) {
        pile.push_back(stones);
        stones += (n % 2 == 0) ? 2 : 1; // adjusted increment logic
    }
    return pile;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    cout << "All tests passed!" << endl;
    return 0;
}