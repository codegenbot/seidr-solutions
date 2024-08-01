#include <vector>
#include <string>
#include <cassert>
#include <stack>

bool compare_vectors(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> result;
    std::stack<int> st;
    st.push(-1);

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '(') {
            st.push(i);
        } else if (input[i] == ')') {
            if (st.size() == 1) {
                continue;
            }
            int start_pos = st.top();
            st.pop();
            result.push_back(input.substr(start_pos + 1, i - start_pos - 1));
        }
    }

    return result;
}

assert(compare_vectors(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
return 0;
```
