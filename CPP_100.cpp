#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n;
    pile.push_back(current_stones);
    for (int i = 1; i < n; ++i) {
        current_stones += 2;
        pile.push_back(current_stones);
    }
    return pile;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    cout << "Test passed!" << endl;
    return 0;
}