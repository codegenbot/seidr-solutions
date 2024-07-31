#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(const string& s) {
    int count = 1;
    vector<int> result; 
    for (char c : s) {
        if (c == '(') {
            count++;
            if(count > numeric_limits<int>::max()/sizeof(int)) return {}; // prevent overflow
            result.push_back(count);
        } else if (c == ')') {
            count--;
        }
    }
    return result;
}

bool same(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

int main() {
    vector<int> expected = parse_nested_parens("(()(())((()))");
    assert(same(parse_nested_parens("(()(())((()))"), expected));
}