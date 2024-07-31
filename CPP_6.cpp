```c++
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::vector<int> parse_nested_parens(const string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                count--;
            }
        }
    }
    return {count + 1};
}

bool same(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

int issame(const string& s) {
    return same(parse_nested_parens(s), {1,4});
}

int main() {
    assert(issame("(()(())((()))"));
}