#include <stack>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> parse_nested_parens(std::string input) {
    std::stack<char> st;
    std::vector<int> counts;
    
    int count = 0;
    for (char c : input) {
        if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            count++;
            st.pop();
        }
        
        if (st.empty()) {
            counts.push_back(count);
            count = 0;
        }
    }
    
    return counts;
}