#include <iostream>
#include <sstream>
#include <vector>

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> parse_nested_parens(std::string s, std::vector<int> vec) {
    std::stack<int> st;
    for(char c : s) {
        if(c == '(') {
            st.push(1);
        } else if(c == ')') {
            while(st.top() != 1) st.pop();
            st.pop();
        }
    }
    int depth = 0;
    std::vector<int> result;
    for(int i = vec.size() - 1; i >= 0; i--) {
        while(depth > 0 && --depth > 0) {
            if(!st.empty()) {
                result.push_back(vec[st.top()]);
                st.pop();
            }
        }
    }
    return result;
}

int main() {
    assert(same(parse_nested_parens("(()(())((()))"), vector<int>({4, 3, 2, 1, 0, -1, -2, -3, -4})));
    return 0;
}