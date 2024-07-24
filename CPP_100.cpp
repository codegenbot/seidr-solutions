#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

vector<vector<int>> make_a_pile(int n) {
    vector<vector<int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({i*2});
    }
    return pile;
}

bool isSame(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i][0] != b[i][0]) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<vector<int>> pile = make_a_pile(n);
    assert(isSame(pile, make_a_pile(n)));
    return 0;
}