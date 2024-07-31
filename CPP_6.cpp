```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <limits>

using namespace std;

vector<long long> parse_nested_parens(const string& s) {
    long long count = 1;
    vector<long long> result; 
    for (char c : s) {
        if (c == '(') {
            count++;
            if(count > numeric_limits<long long>::max()) return {}; // prevent overflow
            result.push_back(count);
        } else if (c == ')') {
            count--;
        }
    }
    return result;
}

bool same(const vector<long long>& a, const vector<long long>& b) {
    return a.size() == b.size();
}

int main() {
    vector<long long> expected = parse_nested_parens("(()(())((()))");
    assert(same(parse_nested_parens("(()(())((()))"), expected));
}