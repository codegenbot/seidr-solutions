#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = (n % 2 == 0) ? n : n-1;
    for(int i = 0; i < n; ++i) {
        pile.push_back(current_stones);
        if (n % 2 == 0) {
            current_stones += 2;
        } else {
            current_stones += 2;
        }
    }
    return pile;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    assert(issame(make_a_pile(7), {6, 8, 10, 12, 14, 16, 18}));
    cout << "Test passed!" << endl;
    return 0;
}