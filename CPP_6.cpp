```cpp
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(const string& s) {
    stack<int> st;
    vector<int> result; 
    for (char c : s) {
        if (c == '(') {
            st.push(1);
        } else if (c == ')') {
            int count = st.top();
            st.pop();
            while(count > 0) {
                result.push_back(count);
                count--;
            }
        }
    }
    return result;
}

int main() {
    vector<int> expected = parse_nested_parens("(()(())((()))");
    assert (parse_nested_parens("(()(())((()))") == vector<int>({4}));
}