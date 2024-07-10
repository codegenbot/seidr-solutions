#include <vector>
#include <stack>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); ++i) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> parse_nested_parens(const std::string& s) {
    std::stack<char> parentheses;
    std::vector<int> result;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '(') {
            while(parentheses.size() && parentheses.top() == ')') {
                parentheses.pop();
            }
            if(!parentheses.empty()) {
                result.push_back(std::stoi(s.substr(i+1)));
                break;
            }
        } else if(s[i] == ')') {
            parentheses.push(s[i]);
        }
    }

    return result;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((()))"), vector<int>({4, 3, 2, 1, 0, -1, -2, -3, -4})));
    return 0;
}