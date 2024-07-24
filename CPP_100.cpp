```
#include <vector>
#include <initializer_list>
#include <iostream>

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
        if (a[i].size() != b[i].size()) return false;
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

int main 
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<vector<int>> pile1 = make_a_pile(n);
    for (const auto& row : pile1) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }