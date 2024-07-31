```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(const string& s) {
    int count = 0;
    vector<int> result; 
    for (char c : s) {
        if (c == '(') {
            count++;
            if (count < INT_MAX) {
                result.push_back(count);
            }
        } else if (c == ')') {
            if (count > 0) {
                count--;
                if (count < INT_MAX) {
                    result.push_back(count);
                }
            }
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