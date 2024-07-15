#include <vector>

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
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

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group = "";
    bool in_group = false;

    for (char c : paren_string) {
        if (c == '(') {
            in_group = true;
            group = "";
        } else if (c == ')') {
            in_group = false;
            result.push_back(group);
        } else if (in_group) {
            group += c;
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), { "()", "(())", "(()())" }));
}