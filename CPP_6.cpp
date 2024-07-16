#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(string paren_string);

vector<int> parse_nested_parens(string paren_string) {
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
    // Your main function logic here
    return 0;
}