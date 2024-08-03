#include <vector>

vector<int> parse_nested_parens(string paren_string);

bool issame(vector<int> a, vector<int> b){
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

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_depth = 0;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}

int main() {
    string input;
    getline(cin, input);
    vector<int> res = parse_nested_parens(input);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}