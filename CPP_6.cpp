#include <vector>
#include <string>
#include <iostream>
#include <ostream>

using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(const string& s) {
    vector<int> result;
    int num = 0;
    for (char c : s) {
        if (c == '(') {
            num++;
        } else if (c == ')') {
            if (num > 0) {
                result.push_back(num);
                num--;
            }
        }
    }
    return result;
}

int main_function() {
    vector<int> expected = {4, 3, 2, 1, 0, -1, -2, -3, -4};
    if (!same(parse_nested_parens("(()(())((()))"), expected)) {
        cout << "Test failed" << endl;
    } else {
        cout << "Test passed" << endl;
    }
    return 0;