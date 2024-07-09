#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0;
    int depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            depth++;
            max_depth = max(max_depth, depth);
        } else if (c == ')') {
            depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}

int main() {
    vector<int> a = parse_nested_parens("(()(()) ) ");
    vector<int> b = parse_nested_parens("( () ( () ) )");
    
    if (issame(a, b)) {
        cout << "Same depths" << endl;
    } else {
        cout << "Different depths" << endl;
    }

    return 0;
}