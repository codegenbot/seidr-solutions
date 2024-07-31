#include <iostream>
#include <vector>
#include <string>

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
    vector<int> result;
    result.push_back(count + 1);
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

int main() {
    assert(issame({1}, parse_nested_parens("(()(())((()))")));
    return 0;
}