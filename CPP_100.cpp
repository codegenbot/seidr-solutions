#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<vector<int>> make_a_pile(int n) {
    vector<vector<int>> pile(n);
    for (int i = 1; i <= n; i++) {
        pile[i-1].push_back(i*2);
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
    vector<vector<int>> pile1 = make_a_pile(n);
    assert(isSame(make_a_pile(8), pile1));
    for (const auto& row : pile1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}