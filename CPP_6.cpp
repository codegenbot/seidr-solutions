#include <iostream>
#include <stack>
#include <string>

using namespace std;

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
    // assert(same(parse_nested_parens("(()(())((()))"), expected));
}