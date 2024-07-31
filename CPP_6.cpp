#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(const string& s) {
    int count = 0;
    vector<int> result;
    for (char c : s) {
        if (c == '(') {
            count++;
            result.push_back(count);
        } else if (c == ')') {
            if (count > 0) {
                count--;
                result.push_back(count);
            }
        }
    }
    return result;
}

bool same(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

int main() {
    assert(same(parse_nested_parens("(()(())((()))")));
}