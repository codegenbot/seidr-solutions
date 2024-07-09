#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> parse_nested_parens(std::string paren_string);

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int curr_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
            depths.push_back(curr_depth);
        } else if (c == ')') {
            curr_depth--;
        }
    }
    return depths;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}