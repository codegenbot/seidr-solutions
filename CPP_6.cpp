#include <stack>
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

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