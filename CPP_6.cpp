```
using namespace std;

#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_nested_parens(const std::string& s) {
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

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size();
}

int issame(const std::string& s) {
    return same(parse_nested_parens(s), {1,4});
}

int main() {
    assert(issame("(()(())((()))"));
}