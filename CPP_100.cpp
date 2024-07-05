#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n;
    for (int i = 0; i < n; ++i) {
        pile.push_back(current_stones);
        if (i % 2 == 0) {
            current_stones += 2;
        } else {
            current_stones += 1;
        }
    }
    return pile;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 11, 13, 14, 16, 17, 19}));
    cout << "Test passed." << endl;
    return 0;
}