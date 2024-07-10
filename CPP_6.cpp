#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<vector<int>>& v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] != -1)
                return false;
        }
    }
    return true;
}

vector<vector<int>> parse_nested_parens(string s) {
    vector<vector<int>> res;
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            res.push_back({});
            count++;
        } else if (c == ')') {
            count--;
        }
    }
    return res;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))"), {4, 3, 2, 1, 0, -1, -2, -3, -4}));
    return 0;
}